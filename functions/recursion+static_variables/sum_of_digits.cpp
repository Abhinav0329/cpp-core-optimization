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

//using recursion
#include<iostream>
using namespace std;
int sumdigits(int n){
    if(n==0){
        return 0;
    }
    else{
        return (n%10)+sumdigits(n/10);
    }
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int sum = sumdigits(n);
    cout<<"The sum of digits are "<< sum <<'\n';
    return 0;
}