#include <iostream> 
#include <vector> 
using namespace std; 
int main() 
{ 
    int x = 11;
    int y = 5;
    int z, z1;

    cout <<"AND : " << (x & y) << endl;
    cout <<"OR : " (x | y) << endl;
    cout <<"XOR : " (x ^ y) << endl;
    cout <<"NOT : " (~y) << endl;

    z = y<<1;   //LEFT SHIFT
    z1 = y>>1;   //RIGHT SHIFT
    cout << z << endl << z1;


    return 0; 
}