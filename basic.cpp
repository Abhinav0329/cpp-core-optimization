// #include<iostream>
// int main(){
//     std::cout << "Hello parents,i am going to start my journey" << std::endl;
//     return 0;
// }

//(1.)using std::cout to display output

// #include<iostream>
// int main(){
//     std::cout<<"Hello world";
//     std::cout<<"My name is Abhi"; << - insertion operator
//     return 0;
// }

//(2.)using std::endl to output new line

// #include<iostream>
// int main(){
//     std::cout<<"Hello world"<<std::endl; //std::endl will cause the cursor to move to the next line     
     
//     Slow: Adds a character and forces the hardware to refresh the screen 
//     std::cout<<"my name is abhi"<<std::endl;

//     Fast: Just adds a character to the buffer
//     std::cout << "my name is abhi"<<'\n';
//     return 0;
// }

//(3.)using std::cin to recieve input

// #include<iostream>
// int main(){
//     std::cout<<"Enter a number : ";
//     int x{};
//     std::cin>>x; >> - extraction operator
//     std::cout<<"You entered : "<<x<<'\n';
//     return 0;
// }

//(4.)using expression 

// #include<iostream>
// int main(){
//     int num{2+3};
//     std::cout<<num<<'\n';
//     return 0;
// }