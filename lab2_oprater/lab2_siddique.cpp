/*
lab 2, operateros
sep 3 , 2025

*/

#include <iostream>
using namespace std;

int main() {
    cout << "\n---" << endl;
    cout << "-- example 1: arithmetic operator" << endl;
    // set number formate
    cout.setf(ios::fixed);
    cout.precision(3);

    // calculate the height of a free falling object
    // free_fall = 0.5*gravity*time*time
    // declare a constant variable named 'gravity'
    const float GRAVITY = 9.8;

    // declare variable height and time
    float height = 0, time = 0;
    // collect the fallowing time

    cout << "Enter a falling time in seconds: ";
    cin >> time;

    height = 0.5 * GRAVITY * time * time;

    cout << "The Height of a free fall object at : " << time << " seconds is " <<   height<< endl;

    cout << "-- example 2: assigment operator" << endl;
    int number1 = 10;

    int number2 = 3;

    cout<<"original number1 = "<<number1<<endl;
    number1 ++;

    cout<<"update number1 = "<<number1<<endl;
    cout<<"orignal number2 = "<<number2<<endl;
    number2 --;
    cout<<"update number2 = "<<number2<<endl;
    number2 += 5;
    cout<<"upddate number2 by 5 = "<<number2<<endl;
    number1 *=2 ;
    cout<<"update number1 using *=2. --- "<<number1<<endl;    

    cout<<"The remainder of" <<number1<< " and "<<number2<<" is "<<number1%number2<<endl;
    cout<<"number1 = "<<number1<<endl;
    cout<<"number2 = "<<number2<<endl;

    number1 %= number2;
    cout<<"after %=, number1 = "<<number1<<endl;
    cout<<"after %=, number2 = "<<number2<<endl;   

    cout<< "-- example 3: comparison operator" << endl;
    cout<<" is number1 equale to number2? "<<(number1 ==number2)<<endl;
    cout<<"ios number1 greater than number2? "<<(number1 > number2)<<endl;
    cout<<"is number1 less then number2? "<<(number1 != number2)<<endl;

    cout<< "-- example 4: logical operator" << endl;
    // And operator
    bool check_numbers =(number1 != number2) && (number1 < number2) && (number1>5);
    // number1 != number2 --> true
    //number1   < number2 --> true
    //number1<5 --> false
    //check_number = true && true && false =false
    cout<<"The result of check_number is "<<check_numbers<<endl;


        // OR operator
        bool check_or = (number2 > 10) || (number2 != 3) || (number2<number1);
        // number2 > 10 --> false
        // number2 != 3 --> true
        //number2<number1 ---> false
        //false || trye || false = true
        cout<<"the result of check numberis "<<check_or<<endl;
        cout<< "-- example 5: casting -----" << endl; 
        int n= 5;
        float m =n/2.0 ;

        cout<<"implicit casting = "<<m/2<<endl;

          cout << "\n--- Exercise ----" << endl;

    int a, b;

    cout << "Enter the first number (a): ";
    cin >> a;

    if (a != 15) {
        cout << "First number is not 15. Skipping operations." << endl;
        return 0;  // Exit early if a != 15
    }

    cout << "Enter the second number (b): ";
    cin >> b;

    if (b != 10) {
        cout << "Second number is not 10. Skipping operations." << endl;
        return 0;  // Exit early if b != 10
    }

    // Both conditions are satisfied: a == 15 and b == 10
    int original_a = a;
    int original_b = b;

    cout << "\nArithmetic Operations:" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    // Assignment operations
    a = original_a + original_b;  // a = 25
    b = original_b - 5;           // b = 5

    cout << "\nAfter assignment operations:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Boolean operations
    cout << "\nBoolean Operations:" << endl;
    cout << "Is a greater than b? " << (a > b ? "true" : "false") << endl;
    cout << "Is a equal to b? " << (a == b ? "true" : "false") << endl;
    cout << "Is a not equal to b? " << (a != b ? "true" : "false") << endl;
    cout << "Are both a and b positive? " << ((a > 0 && b > 0) ? "true" : "false") << endl;
    cout << "Is either a or b negative? " << ((a < 0 || b < 0) ? "true" : "false") << endl;
    cout << "Is a not greater than b? " << (!(a > b) ? "true" : "false") << endl;

    return 0;
}
