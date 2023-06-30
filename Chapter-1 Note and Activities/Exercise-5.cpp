/*
* Write a function that accepts a year as a user input and returns a one if the year is a leap year or a zero if it is not.

* Purpose: To demonstrate function parameter and return 
*
* Type of function: A function with both return and a parameter.
*/

#include <iostream>
using namespace std;

// function prototype, declaration. this function has both parameter, and return a value.
bool leapyear_checker(int); // it is possible to spcify the parameter type only during function declaration like this. 
                      

int main() {
    int year;
    cout<<"Please enter a year [YYYY]:  ";
    cin>>year;
    
    cout<<year;
    leapyear_checker(year) ? cout<<" is a leaper year."<<endl : cout<<" is not a leap year."<<endl;

    /*
    // Alternative 1, using if condition
    if (leapyear_checker(year)) {
         cout<<year<<" is a leaper year."<<endl;
    } else {
        cout<<year<<" is not a leap year."<<endl;
    }
  
    // Alternative 2, strore the return 
    bool leapyear = leapyear_checker(year);
    if(leapyear) cout<<year<<" is a leaper year."<<endl;
    else cout<<year<<" is not a leaper year."<<endl;
    */
  
   return 0;
}

// function definition
bool leapyear_checker(int year) // function header. Here you should specify both type and indentifier of parameter 
{
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}  
