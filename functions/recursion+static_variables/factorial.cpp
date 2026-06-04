#include<iostream>
using namespace std;
long long factorial(int n,int accumulator=1){
    if(n==0 || n==1) return accumulator;
    return factorial(n-1,n*accumulator);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int result=factorial(num);
    cout<<"the factorial of "<< num <<" is "<< result <<'\n';
    return 0;
}