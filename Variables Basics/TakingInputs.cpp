// cin can be used to take input from the user. 
// It is a part of the iostream library and is used to read data from the standard input (keyboard). 
// The syntax for using cin is as follows:
// cin >> variable_name;

#include <iostream>
using namespace std;
int main() {
    int x; // declaring an integer variable 'x'
    cout << "Enter a number: ";
    cin >> x; // taking input from the user and storing it in the variable 'x'
    cout << "You entered: " << x << endl; // displaying the value of 'x' to the user
    return 0;
}