// logic of gcd - If a number d divides both a and b, then d must also divide their difference (a−b)
//, and consequently, their remainder (a(modb)).

/*
1.gcd(12,18)->gcd(18,12%18)->gcd(18,12)
2.gcd(18,12)->gcd(12,18%12)->gcd(12,6)
3.gcd(12,6)->gcd(6,12%6)->gcd(6,0)
4.gcd(6,0) hence it return a because b=0
*/

// example of TAIL RECURSION
#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a % b);
    }
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<"Enter the numbers : "<< n1 <<" "<< n2 <<'\n';
    int result = gcd(n1,n2);
    cout<<"The gcd of both numbers is "<< result <<'\n';
    return 0;
}

// Interview question
/*
--interviewer analyzing your line return gcd(b, a % b);
(Que)Since this recursive statement has nothing left to calculate after the deeper function call finishes, 
what optimization is triggered here by our Clang++ compiler ?
(Ans)Tail Call Optimization (TCO) - the compiler destroys the previous frame and reuses the exact same memory slot.This saves space
and shift my space complexity from O(logn) to highly optimised O(1) constant memory space 
*/