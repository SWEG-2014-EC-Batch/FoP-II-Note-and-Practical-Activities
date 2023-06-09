/* 
* Problem Description - Write a function named product() that acc two floating-point numbers as a parameters,
* multiplies these two numbers and display the result.
* 
* Purpose: To demonstrate function parameter
*
* Type of function: A function with parameters and no return.
*/

#include <iostream>
using namespace std;
void mult(float num1, float num2); // function prototype, declaration. this function has two parameter(s), but has no return.

int main() {
  mult(5.14, 13.65); // calling a function with floating-point literals
  
  float num;
  cout<<"Enter a floating-point number: ";
  cin>>num;
  mult(num, 21.567); // calling a function with floating-point literal and variable.
  
  float num1, num2;
  cout<<"Enter the first floating-point number: ";
  cin>>num1;
  cout<<"Enter the second floating-point number: ";
  cin>>num2;
  mult(num1, num2); // calling a function with floating-point literal and variable.
  
   return 0;
}

// function definition
void mult(float num1, float num2) // function header
{
    cout<<"The product of "<<num1<<" and "<<num2<<" is "<<num1*num2<<"\n\n";
}  
