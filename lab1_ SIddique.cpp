/*
ABU Siddique
Aug 27, 2025
Lab 1, iostream
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "----- Example 1: cout data -----" << endl;
    cout << "This is a C++ code" << endl;

    // variables = temporary storage of data
    // declare the variable first
    string username = "peterpan123";
    cout << "\nWelcome to C++ \t\t" << username << endl;

    cout << "----- Example 2: cin data -----" << endl;
    cout << "Enter a new username " << endl;
    cin >> username;
    cout << "New user is " << username << endl;

    cout << "----- Example 3: data type -----" << endl;
    // declare variable
    char sym = '%';
    float distance = 5.63;
    double d = 8.9;
int i = static_cast<int>(std::round(d)) // i will be 9;


    cout << "Given symbol = " << sym << endl;
    cout << "Given distance = " << distance << endl;
    cout << "Given number = " <<  << endl;
    cout << "Given number = " << number << endl;

    cout << "----- EXERCISE -----" << endl;
    // declare variables
    string name;
    int age;
    float gpa;

    // collect data
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your GPA: ";
    cin >> gpa;

    // print the result
    cout << "\n--- Student Info ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;

    return 0;
}