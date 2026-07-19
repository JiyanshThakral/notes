#include <iostream>
using namespace std;
int main () {
    int n;
    int a=5;
    cin >> n;
    for (int i=2; i<n ; i+=1 )
    if (n%i==0) {
        a=6;
        break;
    }
    
    if (a==5) {
        cout << "Prime";
    }
    else {
        cout << "Not Prime";
    }
}