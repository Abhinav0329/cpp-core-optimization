//Program on 
//(a.)character is a->z or A->Z
//(b.)else return the predecessor of that character using function ProcessInput()   
#include<iostream>
using namespace std;
char ProcessInput(char ch){
    if(ch=='a'){
        return 'z';
    }
    else if(ch=='A'){
        return 'Z';
    }
    else{
        return ch-1;//direct ASCII value subtraction
     }
}
int main(){
    char character;
    cout<<"Enter the character : ";
    cin>>character;
    char result = ProcessInput(character);
    cout<< result <<'\n';
    return 0;
}