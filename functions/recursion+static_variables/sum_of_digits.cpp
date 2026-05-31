//(1.)using iteration
// #include<iostream>
// using namespace std;
// int Sum(int n){
//     int sum=0;
//     while(n>0){
//         int lst_digit=n%10;
//         sum+=lst_digit;
//         n/=10;
//     }
//     return sum;
// }
// int main(){
//     int num;
//     cout<<"Enter the number : ";
//     cin>>num;
//     int result = Sum(num);
//     cout<<"The sum of digits are " << result <<'\n';
//     return 0;
// }

//(2.)using recursion
#include<iostream>
#include<cmath>//needed for abs() function

using namespace std;
int sumdigits(int n,int running_sum=0){
    /*
    Tail Call Optimization (TCO) is a specialized compiler optimization technique that prevents recursive functions from consuming excessive amounts of system stack memory.
    it converts into O(1) space complexity by reusing the same stack frame for each recursive call, 
    rather than creating a new one. This is particularly beneficial for functions that involve deep recursion, 
    as it prevents stack overflow errors and improves performance.
    */
    if(n==0) return running_sum;
    return sumdigits(n/10,running_sum+(n%10));
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int x = abs(n);
    int sum = sumdigits(x);
    cout<<"The sum of digits are "<< sum <<'\n';
    return 0;
}