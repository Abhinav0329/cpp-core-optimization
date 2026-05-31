#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=40;
    int left=0;
    int right=n-1;
    int temp=0;
    int ind;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target){
            temp=1;
            ind=mid;
            break;
        }
        else if(arr[mid]<target){
            left=mid+1;
        }
        else if(arr[mid]>target){
            right=mid-1;
        }
    }
    if(temp==0){
        cout<<"target is not found "<<"-1"<<endl;
    }
    else{
        cout<<"target is found at index "<<ind<<endl;
    }
    return 0;
}