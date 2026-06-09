//++,-- can be used as prefix or postfix operator.
// In prefix form, the operator is placed before the operand. In postfix form, the operator is placed after the operand.
// The prefix form of the increment operator (++x) increments the value of x before it is used in an expression. 
// The postfix form (x++) increments the value of x after it is used in an expression.

#include <iostream>
using namespace std;
int main() {
    int x = 5;
    cout << "Initial value of x: " << x << endl;

    // Using prefix increment
    cout << "Using prefix increment (++x): " << ++x << endl; // x is incremented before being printed
    cout << "Current value of x: " << x << endl;

    // Using postfix increment
    cout << "Using postfix increment (x++): " << x++ << endl; // x is printed before being incremented
    cout << "Current value of x: " << x << endl;


    cout << x++ << endl; // x is printed before being incremented
    cout << x << endl; // x is now incremented
    cout << ++x << endl; // x is incremented before being printed

    return 0;
}