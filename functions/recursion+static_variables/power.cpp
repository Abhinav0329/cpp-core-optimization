#include<iostream>
using namespace std;
int power(int base,int exp,int accumulator=1){
    if(exp==0) return accumulator;
    // If exponent is odd, multiply the current base into our accumulator backpack
    if(exp%2!=0 ) return power(base,exp-1,base*accumulator);
    // If exponent is even, square the base and cut the exponent in half
    return power(base*base,exp/2,accumulator);
    // Recursive step: base^exp = base * base^(exp-1)
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