#include<iostream>
using namespace std;
int decimalToOctal(int n,int x){
    if(n==0){
        return 0;
    }
    else{
        return (n % x + 10 * decimalToOctal(n/x,x));
    }
}
int main(){
    int num,x;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Enter the divisor : ";
    cin>>x;
    int result = decimalToOctal(num,x);
    if(1){
       cout << "The converted form of " << num << " in base " << x << " is: " << result << '\n';
    }
    return 0;
}