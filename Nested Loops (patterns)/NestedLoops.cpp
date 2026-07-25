//nested loops are loops inside loops. They are used to print patterns. 
// The outer loop is used to print the rows and the inner loop is used to print the columns.

#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++) { // outer loop
        for (int j = 1; j <= i; j++) { // inner loop
            cout << "* "; // print star
        }
        cout << endl; // move to next line after each row
    }
    return 0;
}