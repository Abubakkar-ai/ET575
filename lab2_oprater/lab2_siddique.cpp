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
    return 0;
}
