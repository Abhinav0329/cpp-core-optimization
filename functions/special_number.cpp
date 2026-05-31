//special number - a three digit number where the sum of first two digit is equal to third digit
#include<iostream>
using namespace std;
int specialnumber(int n){
    int a = n/100;//first digit
    int b= (n/10)%10;//second digit
    int c = n % 10;

    if(a+b==c){
        return true;
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    
    if(specialnumber(n)){
        cout<<"It is special number\n";
    }
    else{
        cout<<"It is not a special number\n";
    }
    return 0;
}