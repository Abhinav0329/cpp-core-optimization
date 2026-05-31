/*
Bubble_sorting
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={4314,4324,25,4265,46,536,356};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){ // < is for descending order
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout << endl; 
// }

/*
using pointer and functions
*/
// #include<iostream>
// using namespace std;
// void BubbleSort(int *ptr,int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(*(ptr+j)>*(ptr+j+1)){ // < is for descending order
//                 int temp=*(ptr+j);
//                 *(ptr+j)=*(ptr+j+1);
//                 *(ptr+j+1)=temp;
//             }
//         }
//     }
// }
// int main(){
//     int arr[]={3,143,54,5,45,4,66};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     BubbleSort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<*(arr+i)<<" ";
//     }
//     cout << endl;
// }


/*
Do Bubble_sorting otherwise stop sorting when sum of adjacent numbers is 9
*/
#include<iostream>
using namespace std;
int main(){
    int arr[]={3,46,7,2,42,8,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int stopsorting = 0; 
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){ // < is for descending order
                if(arr[j]+arr[j+1]==9){
                    stopsorting = 1;
                    break;
                }
                else{
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl; 
 }
