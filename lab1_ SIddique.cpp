/*
ABU Siddique
Aug 27, 2025
Lab 1, iostream
*/

#include <iostream>
#include <cmath> // Needed for round function
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
    int i = static_cast<int>(round(d)); // i will be 9

    cout << "Given symbol = " << sym << endl;
    cout << "Given distance = " << distance << endl;
    cout << "Given number = " << i << endl;

    cout << "----- EXERCISE -----" << endl;

    // declare variables
    string country;
    char gender;
    int zipcode;
    float rate;

    // collect data
    cout << "Enter your country: ";
    cin >> country;

    cout << "Enter your gender (f = female, m = male, o = other): ";
    cin >> gender;

    cout << "Enter your zip code: ";
    cin >> zipcode;

    cout << "Enter the tax rate: ";
    cin >> rate;

    // print the result
    cout << "\n--- Collected Info ---" << endl;
    cout << "Entered country:\t" << country << endl;
    cout << "Selected gender:\t" << gender << endl;
    cout << "Zip code:\t\t" << zipcode << endl;
    cout << "Tax rate:\t\t" << rate << endl;

    return 0;
}
