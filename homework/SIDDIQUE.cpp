/*
ABU Siddique
Sep 14, 2025
homework1
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "\n ----- ACTIVITY 1 -----";

    
    string part1="Welcome to ";
    string part2="New York City";
    string name;
    cout << "Enter your name: ";
    cin >> name;

    string full_message =part1+part2+" "+name;
    cout<<"\n"<< full_message<<endl;
    int length = full_message.length();

 
    int index = full_message.find("ma");

    string replaced_message = full_message;
    if (index != string::npos) {
        replaced_message.replace(index, 2, "%---%");
    }
    // print result
    cout << "Concatenated message:\t\t" << full_message << endl;
    cout << "Message length:\t\t\t" << length << endl;
    cout << "Index of character 'ma':\t" << index << endl;
    cout << "Replace 'ma' with %---%:\t" << replaced_message << endl;

    cout << "\n ----- ACTIVITY 2 ----- ";

    const float PI = 3.14159;

    float radius, height;
    cout<< "Enter the radius (cm): ";
    cin>>radius;
    cout<<"Enter the height (cm): ";
    cin>>height;


    bool isRadiusGreater = radius>height;
    bool isRadiusEqual = radius == height;

    height *= 3;     // triple the height
    radius += 5;     // increase radius by 5

  
    bool isRadiusNotEqualAndGreater = (radius != height) && (radius > height);

    float volume = PI * radius * radius * height;

  
    // print resuilt
    cout<<"Step 3) Is the radius greater than height?\t\t\t"<<isRadiusGreater<<endl;
    cout<<"Step 4) Is the radius equal to height?\t\t\t\t"<<isRadiusEqual<<endl;
    cout<<"Step 5) Triple height =\t\t\t\t\t\t"<< height<<"cm"<<endl;
    cout<<"Step 5) Increased radius by 5 =\t\t\t\t\t"<<radius<<"cm"<<endl;
    cout<< "Step 6) Is the radius not equal to and greater than height?\t"<<isRadiusNotEqualAndGreater<<endl;
    cout<< "Step 7) The volume of a right cylinder with radius "<<radius<< "cm and height "<<height<<"cm is = "<<volume<<"cm^3"<<endl;

    return 0;
}
