/* This exercise is designed to demonastrate function declaration and definition.
   It is possible to create the declaration and definition together (both in one) or separately.
   In this example we create function declaration and definition together.
*/

#include <iostream>
using namespace std;

// creating function declaration and definition together
// This function has no return type and parameter
void welcome(){
    string name;
    cout<<"Please, Your name: ";
    cin>>name;
    cout<<"Hello, "<<name<<"\nWelcome to Modular Programming";
}

int main() {
    welcome(); // calling a function. If the function has no parameter we call it by specifiying its name only
    return 0;
}
