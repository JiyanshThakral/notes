#include <iostream>
using namespace std;
int main () {
    cout << "enter a number:" << endl ;
    int n;
    cin >> n;
    bool flag = true;

    for ( int i=2 ; i<= (n/2) ; i+=1 ) {
        if (n%i == 0) {
            flag = false ;
            break; }
    }
    if (flag == true) {
        cout << "the number is prime" << endl; }
        else {
            cout << " the number is composite "; }

        
    
return 0;
}