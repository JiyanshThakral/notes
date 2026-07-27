#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int m=1;

    for ( int i=1 ; i <=n ; i++) {
        for ( int j =1; j <=n ; j++ ) {
            if ( j < i) {
                cout << " "; }

            else { 
                cout << m; 
            }
            }
        m++;
        cout << endl;
}
}