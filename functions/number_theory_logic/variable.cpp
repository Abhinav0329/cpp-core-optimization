#include<iostream>
int main(){
    /*
    int x = 5.9; // Compiles silently, x becomes 5 (data lost!)
    int x {5.9}; // ERROR! The compiler stops you instantly to protect your data.
    */
    int age {20};// List initialization 
    std::cout << age; // 
    return 0;
}