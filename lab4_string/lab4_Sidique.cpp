/*
Abu Siddique
lab4 string and string methodes
sep 8, 2025
*/

#include <iostream>
using namespace std;

int main() 
{
    cout << "\n ----- Example 1 : string indexing ----- " << endl;
    string first_name = "peter";
    cout << " The 3rd character = " << first_name[2] << endl;
    cout << " The 1st character = " << first_name.at(0) << endl;

    cout << "\n ----- Example 2 : amount of characters in a string -----" << endl;
    int characters = first_name.length();
    cout << " There are " << characters << " character/s in " << first_name << endl;

    cout<<"\n ----- Example 3: concatenate character/s in a string -----"<<endl;
    string last_name = "Pan";
    string username = "PP123" ;
    cout<<"concatenated word = "<<first_name + last_name + username<<endl;

    cout<<"\n ----- Example 4: substracting characters in a string ----- "<<endl;
    string msg = "Today is a beautiful day!";
    // extract 5 characters from the 3rd character
    string subst_char = msg.substr(2, 5);
    cout<<"Extracted characters = "<<subst_char<<endl;

    cout<<"\n ----- Example 5: inserting characters in a string -----"<<endl;
    // insert the word "maybe"
    msg.insert(5, " maybe ");
    cout<<" After insert method = string "<<msg<<endl;

    cout<<"\n ----- Example 6: inserting characters to the end of string -----"<<endl;
    msg.append(" --by Abu.S");
    cout<<" After append methode = "<<msg<<endl;

    cout<<"\n ----- Example 7: inserting characters to the end of string -----"<<endl;
    msg.replace(17, 10, "bad");
    cout<<" After replacde methode = "<<msg<<endl;

    cout<<"\n ----- Example 8: earsing characters from a string -----"<<endl;
    // erase the word 'Today'
    msg.erase(0, 5);
    cout<<" After erase method = "<<msg<<endl;
    cout<<"\n ----- Example 9: finding characters from a string -----"<<endl;
    // find method return the index number of the first found.
    // if the chareter was not found, it return -1
    // find the word 'Abu'
    int index_Abu = msg.find("Abu");
     cout<<" The index of Abu = "<<index_Abu<<endl;

    cout<<"\n ----- Lab Exercise: Working with User Input -----"<<endl;
    string word;
    cout<<"Please type a word: ";
    cin>>word;

    cout<<"\n2nd character: "<<word[1]<<endl;

    int word_length = word.length();
    cout<<"word has:               "<< word_length<<"characters"<<endl;

    word.replace(2, 2, "-- $ --");
    cout<<"Replace word:           "<<word<<endl;

    word.erase(word.length() - 3, 3);
    cout<<"Remove end characters:  "<<word<<endl;

    return 0;
}


