//continue is used to skip the current iteration of a loop and continue with the next iteration. 
// It is often used when a certain condition is met, and you want to skip the rest of the code in the loop 
// for that iteration.

//example : write odd numbers from 1 to 100 using continue 

#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 100; i++) {
        if (i%2==0) {
            continue; //skip the even numbers
        }


        else {}
        cout << i << " "; }

    return 0;
}