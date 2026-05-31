//using isDuckNumber() to check where it's a duck no(having atleast zero but not as the first digit)
#include<iostream>
using namespace std;
int isDuckNumber(int n){
    if(n<=0) return false;
    while(n>0){
        if(n%10==0){
            return true;
        }
        n/=10;
    }
    return false;
}
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    if(isDuckNumber(num)){
        cout<<"The number is duck number\n";
    }
    else{
        cout<<"The number is not a duck number\n";
    }
    return 0;
}