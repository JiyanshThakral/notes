#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {          // initialization, condition, updation
        cout << i << " ";
    }
    return 0;
}



// steps of loop execution:
// 1: check the condition, if it is true then execute the body of the loop otherwise exit the loop
// 2: execute the body of the loop
// 3: update the loop variable
// 4: repeat the above steps until the condition becomes false