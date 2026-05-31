//A Palindrome is a sequence of characters, numbers, or symbols that reads the exact same backward as it does forward.
#include<iostream>
using namespace std;
int isPalindrome(int original){
    int n=original;
    int reversedigit=0;
    while(n>0){
        int lastdigit=n%10;
        reversedigit=(reversedigit * 10)+lastdigit;
        n/=10;
    }
    return original==reversedigit;
}

int FindNext(int n){
    while(!isPalindrome(n)){
        n++;
    }
    return n;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    
    if(isPalindrome(n)){
        cout<<"It is Palindrome number\n";
    }
    else{
        cout<<"It is not a Palindrome number\n";
        int nextPalindrome=FindNext(n);
        cout<<"The next palindrome number is " << nextPalindrome << endl;
    }
    return 0;
}