#include <iostream>
#include <cstdio>
#include <cstring>
#define max 100
#define endl "\n"
using namespace std;

//remove duplicate elements form string 
void duplicate(char a[]) {
    int l = strlen(a);

    if (l == 0)
        return;

    int prev = 0;
    for (int i = 1; i < l; i++) {
        if (a[prev] != a[i]) {
            prev++;
            a[prev] = a[i];
        }
    }
    a[prev + 1] = '\0';
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char a[max];
    cin.getline(a, max);

    duplicate(a);
    cout << a << endl;

    return 0;
}