#include<iostream>
#include "calculator.h"
using namespace std;

int main() {
    int num1, num2, res;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    
    cout<<num1 <<" + "<<num2<<" = "<<addition(num1, num2)<<endl;
    cout<<num1 <<" - "<<num2<<" = "<<substraction(num1, num2)<<endl;
    cout<<num1 <<" * "<<num2<<" = "<<multiplication(num1, num2)<<endl;
    cout<<num1 <<" / "<<num2<<" = "<<division(num1, num2)<<endl;
    cout<<num1 <<" % "<<num2<<" = "<<reminder(num1, num2)<<endl;
    
    return 0;
}
