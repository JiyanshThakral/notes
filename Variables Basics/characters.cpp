//characters can be used to store a single character, such as 'a' or 'Z'. 
// They are enclosed in single quotes (' ') and can also represent 
// special characters using escape sequences (e.g., '\n' for newline, '\t' for tab). 
// Characters are often used in programming languages to manipulate text and perform operations on individual characters.

#include <iostream>
using namespace std;
int main() {
    char x; // declaring a character variable 'x'
    cout << "Enter a character: ";
    cin >> x; // taking input from the user and storing it in the variable 'x'
    cout << "You entered: " << x << endl; // displaying the value of 'x' to the user

    cout << "ASCII value of " << x << " is: " << int(x) << endl; // displaying the ASCII value of the character 'x'

    //can also take ASCII value as input and convert it to character

    int asciiValue; // declaring an integer variable 'asciiValue'
    cout << "Enter an ASCII value: ";
    cin >> asciiValue; // taking input from the user and storing it in the variable 'asciiValue'
    cout << "Character corresponding to ASCII value " << asciiValue << " is: " << char(asciiValue) << endl; // converting ASCII value to character and displaying it

    return 0;
}