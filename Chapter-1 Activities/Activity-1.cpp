/* This exercise is designed to demonastrate function declaration and definition. It is possible to create the declaration and definition both in or separately. BUt it is recommendeable to seprate the declaration of function from function definition.
Note: 
    - function declaration refers to creating the prototype of the function by specifying the name, return type, parameter lists.
    - fucntion definition on the other hand refers to adding the body of the fuction.
*/

#include <iostream>
using namespace std;
void farewell(); // function prototype, declaration

// creating function declaration and definition together
void welcome(){
    string name;
    cout<<"Please, Your name: ";
    cin>>name;
    cout<<"Hello, "<<name<<"\nWelcome to Modular Programming";
}

int main() {
    welcome();
    farewell();
    return 0;
}

void farewell() // function prototype, declaration
{
    cout<<"Thank You for coming!";
    cout<<"\nWe hope you will visit us again.";
}
