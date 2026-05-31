#include<iostream>
using namespace std;
int decimalToBinary(int n){
    if(n==0){
        return 0;
    }
    else{
        return (n*2 + decimalToBinary(n/2));
    }
}

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int result = decimalToBinary(num);
    if(1){
       cout << "The converted form of " << num << " in binary is :  "<< result << '\n';
    }
    return 0;
}