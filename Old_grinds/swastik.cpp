#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    //FIRST STAGE
    cout << "*";
    for(int i=0; i<((n-3)/2); i++)
        cout << " ";
    for(int i=0; i<((n+1)/2); i++)
        cout << "*";
    cout << endl;

    //SECOND STAGE
    for(int i=0; i<((n-3)/2); i++) {
        cout << "*";
        for(int i=0; i<(n-3)/2; i++)
            cout << " ";
        cout << "*" << endl;
    }

    //THIRD STAGE
    for(int i=0; i<n; i++)
        cout << "*";
    cout << endl;
    
    //FOURTH STAGE
    for(int i=0; i<(n-3)/2; i++) {
        for(int i=0; i<(((n-3)/2)+1); i++)
            cout << " ";
        cout << "*";
        for(int i=0; i<((n-3)/2); i++)
            cout << " ";
        cout << "*" << endl;
    }

    //FIFTH STAGE
    for(int i=0; i<(n+1)/2; i++)
        cout << "*";
    for(int i=0; i<(n-3)/2; i++)
        cout << " ";
    cout << "*" << endl;

    return 0;
}