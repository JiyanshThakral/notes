//float is used for storing real numbers


#include <iostream>
using namespace std;
int main() {
    float a;     //decleration of variable a
    a=5.5;       //initialization of variable a
    cout <<a<<endl;

    //this can also be done in one line like :-
    float b=10.5;  //decleration and initialization of variable b
    cout <<b<<endl;

    //this can aso be done for 2 variable
    float c=15.5, d=20.5;  //decleration and initialization of variable c and d
    cout <<c<<" "<<d<<endl;

    //can also take input from user
    float e;  //decleration of variable e
    cout <<"Enter a number: ";
    cin >>e;  //initialization of variable e
    cout <<"You entered: "<<e<<endl;
    return 0;
}