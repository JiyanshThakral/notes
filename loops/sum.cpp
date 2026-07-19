#include <iostream>
using namespace std;
int main() {
    int a=0;
    int n;
   cin >> n;
   for (int i = 1 ; i<=n; i+=1)
   a=a+i;

   cout << "The sum of the numbers from 1 to " << n << " is " << a << endl;

}