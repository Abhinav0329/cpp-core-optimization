#include<iostream>
using namespace std;
int checkprime(int n){
    int found = 1; // 1 means we assume it IS prime until proven otherwise
    if(n <= 1) return 0;
    for(int i= 2;i * i <= n;i++){
        if(n%i==0){
            found =0;// We found a factor! It is NOT prime.
            break;
        }
    }
    return found;
}

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int result = checkprime(num);
    if(result==1){
        cout<<"It is a prime no\n";
    }
    else{
        cout<<"It is not a prime no\n";
    }
    return 0;
}