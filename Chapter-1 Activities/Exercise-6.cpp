/* 
* Write the C++ program for a void function that receives three double variables: the
* first two by value and the last one by reference. Name the formal parameters n1, n2,
* and answer. The function should divide the n1 variable by the n2 variable and then
* store the result in the answer variable. Name the function calcQuotient. Also write
* an appropriate function prototype for the calcQuotient function. In addition, write a
* statement that invokes the calcQuotient function, passing it the actual parameters
* num1, num2, and quotient variables.
*
* Purpose: Demonstrate parameter pass by value, address, and pointer and also function overloading.

*/

#include <iostream>

void calcQuotient (double num1, double num2, double &answer); // parameter pass by value and address
void calcQuotient (double num1, double num2, double *answer); // parameter pass by value and pointer

using namespace std;

int main() {
    double num1, num2, answer;
    cout<<"Enter first num: ";
    cin>>num1;
    cout<<"Enter second num: ";
    cin>>num2;
    calcQuotient(num1, num2, answer);   // calling function with parameter by value and by address
    cout<<"The quotient of "<<num1<<"/"<<num2<<" is "<<answer<<" => paramter answer passed by address"<<endl;
    
    calcQuotient(num1, num2, &answer); // calling function with parameter by value and by pointer
    cout<<"The quotient of "<<num1<<"/"<<num2<<" is "<<answer<<" => paramter answer passed by pointer"<<endl;
}

void calcQuotient (double n1, double n2, double &answer) {
    answer = 0;
    if (n2 != 0) answer = n1/n2;
}

void calcQuotient (double n1, double n2, double *answer) {
    *answer = 0;
    if (n2 != 0) *answer = n1/n2;
}
