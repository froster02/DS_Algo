#include<iostream>
using namespace std;
#define sqr(x) (x*x)
#define msg(x) #x
int main() {
    cout << sqr(5) << endl << msg(Hello World);
}