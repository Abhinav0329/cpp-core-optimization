#include<iostream>
using namespace std;
int power(int base,int exp){
    if(exp==0){
        return 1;
    }// Recursive step: base^exp = base * base^(exp-1)
    else{
        return base*power(base,exp-1);
    }
}
int main(){
    int base,exp;    
    cin>>base>>exp;
    cout<<"Enter the base : "<< base <<'\n';
    cout<<"Enter the exponent : "<< exp <<'\n';

    int result = power(base,exp);
    cout<<"Result : "<< result <<'\n';
    return 0;
}