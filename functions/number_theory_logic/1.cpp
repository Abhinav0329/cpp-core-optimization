//print the number in the same order as it is in the input
#include<iostream>
using namespace std;
void takeinput(int arr[],int n){
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void displayoutput(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    takeinput(arr,size);
    displayoutput(arr,size);
    return 0;
}