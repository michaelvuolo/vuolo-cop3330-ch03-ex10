/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Michael Vuolo
 */

#include <iostream>

using namespace std;

int main() {
    // init variables
    double operand1, operand2, result;
    char operation;

    // read operation and operands from user
    cin >> operation >> operand1 >> operand2;

    // compute based on operation
    if (operation == '+')
        result = operand1 + operand2;
    else if (operation == '-')
        result = operand1 - operand2;
    else if (operation == '*')
        result = operand1 * operand2;
    else if (operation == '/')
        result = operand1 / operand2;

    // display result
    cout << "Result: " << result;

    return 0;
}