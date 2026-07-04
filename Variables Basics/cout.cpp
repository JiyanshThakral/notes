// this is the compulsive starting point of every C++ program. 
#include <iostream>
using namespace std;
int main() {
    cout << "this will get printed as it is";
    cout << "this will also get printed as it is, but in the same line as the previous one";
    //use endl to move to the next line
    cout << endl;
    cout << " this will get printed in the next line";
    

    cout << endl;
    cout << endl;
    cout << "this will get printed after one empty line";
    // use cout without "" to perform calculations like cout << 2+3; will print 5 but cout 
    // << 2+3; will print 2+3 as it is.
    cout << endl;
    cout << 2+3; // this will print 5
    cout << endl;
    cout << "the value of 2+3 is " << 2+3;
    return 0;
}