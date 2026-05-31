#include <iostream>
using namespace std;
int reverse(int n) {
    static int rev = 0;
    if (n == 0) {
        int final_ans = rev;
        rev = 0; 
        return final_ans;
    }
    rev = (rev * 10) + (n % 10);
    return reverse(n / 10);
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin>>n;
    int ans = reverse(n);
    cout << "The reverse of " << n << " is " << ans << "\n";
    return 0;
}