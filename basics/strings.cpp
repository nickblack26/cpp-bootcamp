#include <iostream>
#include <string>
using namespace std;

int main () {
    // strings are objects
    // the string library has built in functions

    // you can combine two strings with a + operator like so:

    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    cout << fullName << endl;




    // you can also combine two strings with the append function
    // this function is much faster than combining two strings with a + operator

    firstName = "John ";
    lastName = "Doe";
    fullName = firstName.append(lastName);
    cout << fullName << endl;




    // you can use the function .length to find the length of a string

    string txt = "lakjdf;lajfdjpfoajdsfaokjdfql";
    cout << "The length of the string is " << txt.length() << endl;




    // another function that does the exact same thing is .size

    txt = "lakjdf;lajfdjpfoasfoaijdsf;lajsfl;kjdsfaokjdfql";
    cout << "The size of the string is " << txt.size() << endl;




    // you can access specific characters of a string by using it's string index
    string indexString = "Hell";
    cout << indexString[1] << endl;




    // to change a specific character in a string, you just need to call the string index's number and then assign it a new character
    indexString[0] = 'B';
    cout << "The new string is " << indexString << endl;




    // capture users string input by using the cin variable
    /* string name;
    cout << "Hello, what is your name? " << endl;
    cin >> name;
    cout << "Hello " + name + ", how are you today?" << endl; */


    // using just the cin variable is not useful if you're looking to capture multiple words. 
    // 'cin' variable considers whitespace so that means if you add any space between words it'll just show the first word
    // use getline() function instead of 'cin' to capture multiple words

    string secondName;
    cout << "What's your full name? ";
    getline (cin, secondName);
    cout << "Your name is: " + secondName << endl;

    return 0;
}