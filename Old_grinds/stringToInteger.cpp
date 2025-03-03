#include <iostream>
using namespace std;

int stringToInt(int *c, int n){
    //base case 
    if(n == 0)
        return 0;
    
    //recursive case
    int digit = c[n - 1]  - '0';
    int small_ans = stringToInt(c, n - 1);

    return (small_ans * 10 + digit);
}

int main(){

    char c[ ] = "1234";
    //cin >> c;

    int len = strlen(c);

    cout << stringToInt(c, len);

    return 0;
}