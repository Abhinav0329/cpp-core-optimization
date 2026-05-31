//(1.)void return type
/* 
#include<iostream>
using namespace std;
void printGreeting() {
    cout << "Welcome to LPU CSE202!\n";
    // No return statement needed
}
int main() {
    printGreeting(); // Just calls the action
    return 0;
}
*/

//(2.)Primitive data return type
/*
#include <iostream>
using namespace std;

// Returns a decimal value
double calculateAverage(double score1, double score2) {
    return (score1 + score2) / 2.0; 
}

// Returns a true/false condition
bool isPassing(double gpa) {
    if (gpa >= 5.0) return true;
    else return false;
}

int main() {
    double myAvg = calculateAverage(8.5, 9.1); // Stores the returned double
    cout << "Average: " << myAvg << '\n';

    if (isPassing(myAvg)) { // Uses the returned boolean directly
        cout << "Status: Cleared!\n";
    }
    return 0;
}
*/

//(3.)user defined return type
/*
#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

// Return type is the user-defined struct 'Point'
Point createOriginPoint() {
    Point p {0, 0}; // Direct List Initialization
    return p;       // Returns the whole struct bundle
}

int main() {
    Point origin = createOriginPoint();
    cout << "Coordinates: " << origin.x << ", " << origin.y << '\n';
    return 0;
}
*/

//(4.)pointer return type
/*
#include <iostream>
using namespace std;

// Returns a pointer to the larger integer
int* getLargerAddress(int* ptr1, int* ptr2) {
    if (*ptr1 > *ptr2) return ptr1;
    else return ptr2;
}

int main() {
    int a = 45, b = 89;
    
    // Stores the memory address returned by the function
    int* maxAddress = getLargerAddress(&a, &b); 
    
    cout << "The value at the max address is: " << *maxAddress << '\n'; // Dereferencing
    return 0;
}
*/