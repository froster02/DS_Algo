#include<iostream>
using namespace std;
int main(){
    int x, y, z;
    cin >> x >> y;
    try {
        if(y==0)
            throw 404;
        z = x/y;
        cout << z << endl;
    }
    catch(int i){
        cout << "Division by zero " << i << endl;
    }
    cout << "END";
}