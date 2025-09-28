/*
Abu Siddique
sep28, 2025
Homework2
*/


#include <iostream>
using namespace std;

int main() {
    // Program 1: Age Eligibility
    cout << "\n----- Program 1: Age Eligibility -----" << endl;
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 0 || age > 120) {
        cout << "Invalid age. Please enter a valid age." << endl;
    }
    else if (age < 13) {
        cout << "Not eligible for any activities." << endl;
    }
    else if (age >= 13 && age <= 17) {
        cout << "Eligible for youth activities." << endl;
    }
    else if (age >= 18 && age <= 64) {
        cout << "Eligible for adult activities." << endl;
    }
    else {
        cout << "Eligible for senior activities." << endl;
    }

    // Program 2: Nested Conditional Statement
    cout << "\n----- Program 2: Nested Conditional Statement -----" << endl;
    int num1, num2, sum;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    sum = num1 + num2;

    if (sum < 0) {
        cout << "False alarm! The sum is " << sum << endl;
    }
    else if (sum >= 1 && sum <= 100) {
        if (sum % 5 == 0) {
            cout << sum << " is a pentagon" << endl;
        }
        else if (sum % 2 != 0) {
            cout << sum << " is an odd guess" << endl;
        }
    }
    else if (sum >= 101 && sum <= 200) {
        cout << "The new lucky number is " << sum << endl;
    }
    else if (sum >= 201 && sum <= 999) {
        cout << sum << " is a dreaming number" << endl;
    }
    else if (sum >= 1000) {
        if (sum % 2 == 0 && sum < 2000) {
            cout << sum << " approaches to the infinite evenly!" << endl;
        }
        else if (sum >= 2000) {
            cout << sum << " approaches to the infinite and beyond!" << endl;
        }
    }

    // Program 3: Temperature Converter
    cout << "\n----- Program 3: Temperature Converter -----" << endl;
    int option;
    double temp, result;

    while (true) {
        cout << "\nTemperature Converter Menu:";
        cout << "1. Celsius to Fahrenheit";
        cout << "2. Fahrenheit to Celsius";
        cout << "3. Kelvin to Celsius";
        cout << "4. Kelvin to Fahrenheit";
        cout << "5. Exit";
        cout << "Select an option (1-5): ";
        cin >> option;

        if (option == 5) {
            cout << "Exiting temperature converter.";
            break;
        }

        if (option < 1 || option > 5) {
            cout << "Invalid option! Please select a number between 1 and 5.";
            continue;
        }

        cout << "Enter the temperature to convert: ";
        cin >> temp;

        switch(option) {
            case 1:
                result = temp * 9.0 / 5.0 + 32;
                cout << temp << " Celsius is equal to " << result << " Fahrenheit ";
                break;
            case 2:
                result = (temp - 32) * 5.0 / 9.0;
                cout << temp << " Fahrenheit is equal to " << result << " Celsius ";
                break;
            case 3:
                result = temp - 273.15;
                cout << temp << " Kelvin is equal to " << result << " Celsius ";
                break;
            case 4:
                result = (temp - 273.15) * 9.0 / 5.0 + 32;
                cout << temp << " Kelvin is equal to " << result << " Fahrenheit ";
                break;
            default:
                cout << "Invalid option! ";
                break;
        }
    }

    return 0;
}
