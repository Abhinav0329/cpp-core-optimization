//The Collatz Sequence often referred to as the Collatz Conjecture, the 3n+1 problem,
#include <iostream>
using namespace std;

// Function to print the Collatz sequence and return the step count
int printCollatzSequence(int n) {
    int steps = 0;

    // Base condition filter: sequence only works for positive integers
    if (n <= 0) {
        cout << "Invalid Input. Enter a positive integer greater than 0.\n";
        return 0;
    }

    cout << "Sequence: " << n;

    // Loop continues until 'n' collapses down to 1
    while (n != 1) {
        if (n % 2 == 0) {
            // Rule 1: Even operation
            n = n / 2;
        } else {
            // Rule 2: Odd operation
            n = (3 * n) + 1;
        }
        
        cout << " -> " << n;
        steps++;
    }
    cout << '\n';
    
    return steps; // Returns total transitions back to main
}

int main() {
    int startNum;
    cout << "Enter the starting number: ";
    cin >> startNum;

    int totalSteps = printCollatzSequence(startNum);
    cout << "Sequence completed in " << totalSteps << " steps.\n";

    return 0;
}