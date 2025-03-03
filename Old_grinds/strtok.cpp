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

    char s[max] = "Today is first day of the week";
    char * ptr = strtok(s, " ");
    cout << ptr << endl;

    while (ptr != NULL) {
        ptr = strtok(NULL, " ");
        cout << ptr << endl;
    }

    return 0;
}