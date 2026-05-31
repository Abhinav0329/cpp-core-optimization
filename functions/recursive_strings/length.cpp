//Question :- Given a string, find the length of the string using recursion. Do not use any built-in functions to calculate the length of the string.

//Array decay - the array "decays" (converts) into a raw pointer pointing strictly to its very first character (index 0).
#include<iostream>
using namespace std;

int getlength(const char *str){//A contract that states I promise I am only using this pointer to read data. If I accidentally write code that tries to change the text, break the build immediately."
    if(*str=='\0'){
        return 0;
    }
    else{
        return 1+ getlength(str+1);//This does not alter the text in memory. It simply calculates a new memory address that is exactly 1 byte forward (the next character in line).
    }
}
/*In C++, arrays are never passed by value to functions - computer never makes a duplicate copy of your array when you pass it into a function.
Instead, it passes the original array by sending a pointer to its very first element.*/

// logic :-
/*
getLength("Abhinav") 
   ➔ 1 + getLength("bhinav")
       ➔ 1 + getLength("hinav")
           ➔ 1 + getLength("inav")
               ➔ 1 + getLength("nav")
                   ➔ 1 + getLength("av")
                       ➔ 1 + getLength("v")
                           ➔ 1 + getLength("") [Hits '\0', Returns 0]

Total=1+(1+(1+(1+(1+(1+(1+0))))))=7
*/

int main(){//Fast I/O optimization for execution speed
    ios_base::sync_with_stdio(false);//it breaks the synchronization between C and C++ standard, allowing for faster input and output operations. 
    //This is particularly beneficial when dealing with large volumes of data, as it reduces traffic between the C and C++ standard libraries, resulting in improved performance.
    cin.tie(NULL);//Unties cin from cout, allowing them to operate independently.This means Stoping cout from pausing to print text every time cin asks for input, making code run faster
    
    char str[100];
    cout<<"Enter the text : ";
    cin.getline(str,100);//Reads up to 99 characters, including spaces as cin>>name reads inputs until it hits the first whitespace character
    
    int length = getlength(str);
    cout<<"Total no of letters are -> "<<length<<'\n';
    return 0;
}

//why we have to use (const char* str).Couldn't we use only char str[]?
/*
-->Inside main(), you did use char name[]. But the moment you pass that array into a function, 
C++ physically forces it to become a pointer.In C++, an array variable name represents a fixed, continuous block of memory.
If you have a string with 100 characters, it takes up 100 bytes of RAM C++ refuses to pass the entire 100-byte block of memory into the function 
because copying massive arrays into new function frames would instantly slow down your CPU and act as blockage in your system stack memory.
*/