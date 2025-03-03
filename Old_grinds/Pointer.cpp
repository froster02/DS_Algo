#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int *p;         
    
    p = &x;

    cout << x << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << &x << endl;
    cout << &p << endl;
    cout << p++ << endl;    //move pointer to next location
    cout << p-- << endl;    //move pointer to previous location
    cout << p+2 << endl;    //move pointer to next location by 2
   
}