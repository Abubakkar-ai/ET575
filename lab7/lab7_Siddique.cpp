/*
Abu Siddique
lab7
sep 18, 2025
*/

#include <iostream>
using namespace std;

int main() {
    double num1, num2; 
    int intNum1, intNum2;
    char op;

    cout << "Simple Calculator";

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose operation (+, -, *, /, %, q to quit): ";
    cin >> op;

    if (op == 'q' || op == 'Q') {
        cout << "Exiting the program. Goodbye!";
        return 0;  // exit program
    }

    switch (op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;

        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;

        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;

        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed.";
            } else {
                cout << "Result: " << num1 / num2 << endl;
            }
            break;

        case '%':
            intNum1 = static_cast<int>(num1);
            intNum2 = static_cast<int>(num2);

            if (intNum2 == 0) {
                cout << "Error: Division by zero is not allowed in modulus.";
            } else {
                cout << "Result: " << intNum1 % intNum2 << endl;
            }
            break;

        default:
            cout << "Invalid operation. Please enter +, -, *, /, %, or q.";
    }

    return 0;
}
