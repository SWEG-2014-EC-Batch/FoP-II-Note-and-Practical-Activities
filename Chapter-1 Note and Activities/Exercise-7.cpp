/* 
* Write an overloaded function max that takes either two or three parameters of type
* double and returns the largest of them.
*
* Purpose: Demonstrate function overloading.

*/

#include <iostream>

double max (double, double); 
double max (double, double, double);

using namespace std;

int main() {
    double num1, num2, num3;
    cout<<"Enter first num: ";
    cin>>num1;
    cout<<"Enter second num: ";
    cin>>num2;
    
    cout<<"Enter thrid num: ";
    cin>>num3;
    
    cout<<"\nThe larger number is "<<max(num1, num2)<<endl;  // this calls max() function with two parameters
    cout<<"The largest number is "<<max(num1, num2, num3)<<endl;  // this call max() function with two parameters
}

double max (double n1, double n2) {
    double largest;
    if (n1 >= n2) largest = n1;
    else largest = n2;
    
    return largest;
}

double max (double n1, double n2, double n3) {
    double largest;
    if (n1 >= n2 && n1 >= n3) largest = n1;
    else  if (n2 >= n1 && n2 >= n3) largest = n2;
    else largest = n3;
    
    return largest;
}
