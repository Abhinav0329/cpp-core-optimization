#include <iostream>
using namespace std;
int reverse(int n,int accumulator_argument=0){
    if (n == 0) return accumulator_argument;
    accumulator_argument = (accumulator_argument * 10) + (n % 10);
    return reverse(n / 10, accumulator_argument);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cout << "Enter the number : ";
    cin>>n;
    int ans = reverse(n);
    cout << "The reverse of " << n << " is " << ans << "\n";
    return 0;
}