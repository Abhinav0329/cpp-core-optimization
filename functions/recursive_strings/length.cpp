//Array decay - the array "decays" (converts) into a raw pointer pointing strictly to its very first character (index 0).
#include<iostream>
using namespace std;

int getlength(const char *str){//const is a safety shield. It tells the compiler: "This function is allowed to read the characters, but it is strictly forbidden from modifying or erasing them."
    if(*str=='\0'){
        return 0;
    }
    else{
        return 1+ getlength(str+1);//This does not alter the text in memory. It simply calculates a new memory address that is exactly 1 byte forward (the next character in line).
    }
}

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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
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