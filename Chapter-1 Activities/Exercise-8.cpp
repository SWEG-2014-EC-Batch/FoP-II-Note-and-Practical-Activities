/* 
* Write a function based C++ program that find the sum of Fibonacci series of a given
* number. Define a function named fibonacci that has one argument with default
* argument and returns integer. The function is called both with parameter and
* without parameter.
*
* Purpose: Demonstrate default arguments

*/

#include <iostream>

int fibonacci (int limit = 29); // default argument(s) are added in function declaration

using namespace std;

int main() {
   
   int sum = fibonacci(); //calling function with default argument without parameter(s)
   cout<<"\nThe sum of fibonacci series of default upper limit: "<<sum<<endl;
   
   int limit;
   cout<<"\nEnter the limit to generate fibonacci: ";
   cin>>limit;
   sum = fibonacci(limit); //calling function with default argument with parameter(s)
   cout<<"\nThe sum of fibonacci series of the given upper limit: "<<sum<<endl;
}

int fibonacci (int limit)  {
    int sum = 0, i = 1, j = 1;
    cout<<"Fibonacci series up to "<<limit<<" are: "<<i<<", "<<j<<", ";
    while (i < limit && j < limit) {
        sum += i;
        cout<<i+j<<", ";
        j += i;
        i = j - i;
    }
    
    return sum;
}

