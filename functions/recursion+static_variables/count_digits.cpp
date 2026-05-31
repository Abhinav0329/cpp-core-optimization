#include<iostream>
using namespace std;
int countdigits(int n){
    static int count=0;
    if(n==0){
        int final_ans = count;
        count = 0;
        return final_ans;
    }
    else{
        count++;
        return countdigits(n/10);
    }
}
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int result = (num==0)? 1 :countdigits(abs(num));//if we type 0 then it should print total digits are 1 and convert -ve into +ve
    cout<<"Total digits are "<< result <<'\n';
    return 0;
}