// print all the even numbers from 1 to 100

#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i<=100; i++) {
        if (i%2 == 0) {
            cout << i << " ";
        }
    }


cout << endl;
cout << endl;



    // another way:

    for (int i = 2; i<=100; i+=2) {
        cout << i << " ";
    }



    cout << endl;
    cout << endl;

    

    //another way:
    for (int i=1; i<=100; i++) {
        if (i%2 != 0) {
            continue; // skip the odd numbers
        }
        cout << i << " ";
    }

    cout << endl;
    cout << endl;




    //another way:
    for (int i=1; i<=50; i++) {
        cout << 2*i << " "; // print the even numbers by multiplying the loop variable by 2
    }




    return 0;
}