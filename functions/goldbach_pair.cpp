//A Goldbach Pair is a pair of prime numbers  when added together, equal a specific even integer n.
#include <iostream>
using namespace std;

// Function 1: Helper function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    
    // Check divisors from 2 up to num - 1
    for (int i = 2; i * i <= num; i++) { // Optimized check up to square root
        if (num % i == 0) {
            return false; // Found a factor, not prime
        }
    }
    return true; // No factors found, it is prime
}

// Function 2: Logic function to find and print Goldbach Pairs
void findGoldbachPairs(int n) {
    // Basic verification check
    if (n <= 2 || n % 2 != 0) {
        cout << "Invalid Input. Enter an even number greater than 2.\n";
        return;
    }

    cout << "Goldbach Pairs for " << n << " are:\n";

    // Loop through half of the number to prevent duplicate pairs like (3,7) and (7,3)
    for (int i = 2; i <= n / 2; i++) {
        // If 'i' is prime and its counterpart 'n - i' is also prime
        if (isPrime(i) && isPrime(n - i)) {
            cout << "(" << i << ", " << (n - i) << ")\n";
        }
    }
}

int main() {
    int n;
    cout << "Enter an even number: ";
    cin >> n;

    // Call our core logic engine
    findGoldbachPairs(n);

    return 0;
}