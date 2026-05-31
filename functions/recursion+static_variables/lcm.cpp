#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;/* If you try to run the code without this line and pass a 0, 
    the formula will attempt to calculate 0 / gcd(0, 0). Because GCD(0,0) is mathematically undefined 
    and returns 0, your code would crash with a Division by Zero error */
    return (a / gcd(a, b)) * b;
}

int main() {
    int n1, n2;
    cout << "Enter two numbers separated by a space: ";
    cin >> n1 >> n2;
    int result = lcm(n1, n2);
    cout << "The lcm of both numbers is " << result << '\n';
    return 0;
}

// Interview question
/*
--interviewer looking at your return (a / gcd(a, b)) * b
(Que)Why did you specifically choose to perform the division (a / gcd(a, b)) before multiplying by b instead of just writing (a * b) / gcd(a, b)?
(Ans)We must divide first to prevent an Integer Overflow as it exceeds 32-bit int's maximum limit (2,147,483,647), 
causing the value to roll over into a negative garbage number.
*/