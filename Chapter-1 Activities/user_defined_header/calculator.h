#ifndef CALCULATOR_H
#define CALCULATOR_H

#include<iostream>

int addition (int n1, n2) {
    return n1 + n2;
}

int substraction (int n1, n2) {
    return n1 - n2;
}

int multiplication (int n1, n2) {
    return n1 * n2;
}

int division (int n1, n2) {
    if n2 != 0
        return n1 / n2;
    else {
        cout<<"invalid operation";
        return 0;
    }
        
}

int reminder (int n1, n2) {
    if n2 != 0
        return n1 % n2;
    else {
        cout<<"invalid operation";
        return 0;
    }
        
}

#endif
