//Write a modular program that accepts a single positive integer n as input. The program must analyze all integers from 1 to n (inclusive) and 
//calculate how many of these numbers possess exactly 9 divisors (factors).
#include<iostream>
using namespace std;
int check_9_factors(int num){
    int countTotal=0;
    for(int i=1;i<=num;i++){
        int count=0;
    for(int j=1;j<=i;j++){
        if (i%j==0){
            count++;
        }
    }
    if(count==9){
            countTotal++;
        }
  }
  return countTotal;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int result = check_9_factors(n);
    cout<< result <<'\n';
    return 0;
}