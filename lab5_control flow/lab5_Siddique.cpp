/*
lab5
ABU SIDDIQUE
Sep 10,2025
*/

#include <iostream>
#include<string>
using namespace std;

int main() 
{
    cout<<"\n ----- Example 1: bool variable -----"<<endl;
    // check if a number isn posative
    // declare and collect the a number
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // step 2) check if the number is posative
    bool checkpositive = n>=0;
    //step 3) print the result
    cout<<"IS "<<n<<"positivr? "<<checkpositive<<endl;
    cout<<"\n ----- Example 2: if statement -----"<<endl;
    // change the checking code if a number is posative
    int checking_code = 111;
    if(n>=0){
        checking_code =999;
    }
    cout<<"checking code = "<<checking_code<<endl;
    cout<<"\n ----- Example 3: if-else statement -----"<<endl;    
    // check if a number is even or odd 
    if(n%2 == 0){
        cout<<n<<" is EVEN"<<endl;
    }
    else{
        cout<<n<<" is ODD"<<endl;
    }

    cout<<"\n ----- Example 4: if-else -----"<<endl;
    // absolute vale
    if(n>=0){
        cout<<n<<" is positive"<<endl;

    }
    else{
        cout<<" is negative "<<endl;
        n*=-1;
        cout<<"The absolute value is "<<n<<endl;

    }

     cout<<"\n ----- Example 5: muliway satement -----"<<endl;
     // select the color according to a wavelenth

     int wavelenth = 0;
     string emitted_color = "";
     cout<<"Enter a wavelenth: ";
     cin>>wavelenth;
    // muliway ondition statemnt 
    if( 0<=wavelenth<=379)
        emitted_color = "ultraviolet";
    else if (380<=wavelenth<=520)
        emitted_color = "blue";
    else if (521<=wavelenth<=590)
        emitted_color = " green";
    else if (591<wavelenth<=740)
        emitted_color = "red";
    else if (wavelenth>=741)
        emitted_color = "infrared";
    else
        emitted_color = "unble to read";
    //print result
    cout<<"The emitted color of wavelenth "<<wavelenth<<" is "<<emitted_color<<endl;

    cout<<"\n ----- lab exercis -----"<<endl;
    // delcare varivale
    string gpa ="";
    float final_exam = 0;
    float labs = 0;
    float homework = 0;
    float grade = 0;
    cout<<" Enter a final exam grade (0-100): ";
    cin>>final_exam;

    cout<<" Enter labs grade (0-100): ";
    cin>>labs;

    cout<<" Enter homework grade (0-100): ";
    cin>>homework;
    grade = final_exam * 0.5 + labs * 0.3 + homework * 0.2;
    // Determine GPA using control flow
    if(grade <= 100 && grade >= 90)
        gpa = "A";
    else if(grade >= 80 && grade <= 89)
        gpa = "B";
    else if(grade >= 70 && grade <= 79)
        gpa = "C";
    else if(grade >= 60 && grade <= 69)
        gpa = "D";
    else if(grade < 60 && grade >= 0)
        gpa = "F";
    else
        gpa = "";

    // Print result
    cout<<"A final grade of "<<grade<<" is equivalent to a GPA of "<<gpa<<endl;
    




    //collect the values for final_exam, lba, ND Homework*0.2

    //multiway conditional satemtns

    //print reslut 
    return 0;
}