#include <iostream>
#include <cstring>
#include <cstdio>
#define max 100
#define endl "\n"
using namespace std;

//input string and print 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    string s[max];
    cin.get();

    for (int i = 0; i < n; i++)
        getline(cin, s[i]);

    for (int i = 0; i < n; i++)
        cout << s[i] << endl;

    return 0;
}