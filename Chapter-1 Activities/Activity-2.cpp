/* This exercise is designed to demonastrate function declaration and definition.
   It is possible to create the declaration and definition together (both in one).
   But it is recommendable to separte the decalaration and definition of a funcion. 
   In this example we create a function declaration and definition separately.
*/

#include <iostream>
using namespace std;
void farewell(); // function prototype, declaration. this function has no return type and parameter(s)

int main() {
    farewell();
    return 0;
}

// function definition
void farewell() // function header
{
    string name;
    cout<<"Please, Your name: ";
    cin>>name;
    cout<<"Dear "<<name<<", Thank You for coming!";
    cout<<"\nWe hope you will visit us again.";
}
