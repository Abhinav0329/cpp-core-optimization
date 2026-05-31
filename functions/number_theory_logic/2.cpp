//sort the floating elements in the array
#include<iostream>
#include<algorithm> // For std::sort and std::greater
#include <iomanip>  // For fixed and setprecision
using namespace std;
void takeinput(double (&arr)[6]){
    cout<<"Enter the float elements : ";
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
}
void sortinput(double (&arr)[6]){
    sort(arr,arr+6,greater<double>());//Added greater<double>() to ensure descending order sorting
}                                     // time complexeity - O(nlogn)
void printarray(double (&arr)[6]){
    cout << fixed << setprecision(2);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    double arr[6];
    takeinput(arr);
    sortinput(arr);
    printarray(arr);
    return 0;
}