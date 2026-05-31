/* Print out the entire Fibonacci series up to n terms */
// Iterative approach
#include<iostream>
using namespace std;
void fibonacci(int n){
    int a=0,b=1;
    cout<< a << " " << b << " " ;
    for(int i=2;i<=n;i++){
        int next_term = a+b;
        cout << next_term << " ";
        a=b;
        b=next_term;
    }
    cout<<"\n";
}
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    fibonacci(num);
    return 0;
}

/* Find the exact value located at index position n in the Fibonacci sequence */
// using recursive approach
// #include<iostream>
// using namespace std;
// int fibonacciRecursive(int n){
//     if(n==0) return 0;
//     if(n==1) return 1;
//     return fibonacciRecursive(n-1)+fibonacciRecursive(n-2);
// }
// int main(){
//     int num;
//     cout<<"Enter the number : ";
//     cin>>num;
//     int result = fibonacciRecursive(num);
//     cout << "The Fibonacci number at position " << num << " is " << result << '\n';
//     return 0;
// }