#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <algorithm>
#define max 100
#define endl "\n"
using namespace std;

bool isPlaindrome(char a[]){
    int i = 0, j = strlen(a) - 1;
    while(i < j){
        if(a[i] == a[j]){
            i++;
            j--;
        }
        else 
            return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char a[max];
    cin.getline(a, max);

    if(isPlaindrome(a))
        cout << "Palindrome";
    else 
        cout << "Not Palindrome";

    return 0;
}