// ternary statements can be used to simpliify if,else statements in one line of code.
// syntax: condition ? if true : if false

// example: finding if a number is odd or even using ternary operator

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "enter a number" <<endl;
    cin >> n;
    (n %2 == 0) ? cout << "number is even" : cout << "number is odd" ;
    return 0;
}
