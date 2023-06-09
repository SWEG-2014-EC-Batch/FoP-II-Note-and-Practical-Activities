/* 
* Problem Description - Write a function named product() that accept two floating-point numbers from the user,
* multiplies these two numbers and retunr the result. The program should print the result in main block.
* 
* Purpose: To demonstrate function parameter
*
* Type of function: A function with return and but has no parameter.
*/

#include <iostream>
using namespace std;

float product(); // function prototype, declaration. this function has no parameter, but has return a value.

int main() {
    float result = product();
    cout<<"The product of the two numbers is "<<result<<"\n";
    
    // Alternatively, we can print the returned value directly without storing it as follow. uncomment and test it.
    // cout<<"The product of the two numbers is "<<product()<<"\n";
  
   return 0;
}

// function definition
float product() // function header
{
    float num1, num2, product;
    cout<<"Enter the first floating-point number: ";
    cin>>num1;
    cout<<"Enter the second floating-point number: ";
    cin>>num2;
    product = num1 * num2;
    
    return product;             // return a varibale value
    // return num1 * num2;      // alternatively, we can return the expression like this
}  
