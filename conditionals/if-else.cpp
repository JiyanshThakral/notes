// if else statements can be used to execute a block of code if a specified condition is true, 
// and another block of code if the condition is false.

// Example 1: Using if...else statement

#include <iostream>
using namespace std;
int main() {
  int time;
  cout << "Enter the time (0-23): ";
  cin >> time;
  cout << endl;
  if (time < 18) {
    cout << "Good day." <<endl << endl;
}
  else {
    cout << "Good evening." << endl << endl;
  }


  //example 2: finding if a number is odd or even

    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (num % 2 == 0) {
      cout << "The number is even.";
    } else {
      cout << "The number is odd." ;
    }
  return 0;
}