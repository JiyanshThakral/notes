#include <iostream>
using namespace std;
int main () {
    int n;
    cout << " enter the no of rows : ";
    cin >> n;
    int f;


    for (int i =1; i <=n ; i++ ) {
        int f = i;
        for (int j=1; j<=i ; j++ ) {
            cout << f;
            f--;
        
        }
        cout << endl;
    }
    return 0;
}