//A Palindrome is a sequence of characters, numbers, or symbols that reads the exact same backward as it does forward.
#include<iostream>
using namespace std;
int isPalindrome(int original){
    if(original<0 || (original%10==0 && original!=0)){
        return 0;
    }
    int n=original;
    int reversedigit=0;
    while(n>0){
    reversedigit=(reversedigit * 10)+n%10;;
    n/=10;
    }
    return original==reversedigit;
}

int FindNext(int n){
    long long current = (long long)n + 1;
    while(!isPalindrome(current)){
        current++;
    }
    return current;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
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