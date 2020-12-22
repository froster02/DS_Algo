#include <iostream>
using namespace std;

void generateBracket(char *out, int n, int i, int open, int close){
    //base case 
    if (i == (2*n)){
        out[i] = '\0';
        cout << out << endl;
    }

    //recursive case 
    if(open < n) {
        out[i] = '(';
        generateBracket(out, n, i + 1, open + 1, close);
    }

    if(close < open){
        out[i] = ')';
        generateBracket(out, n, i + 1, open, close + 1);
    }

}
int main(){

    int n;
    cin >> n;

    char out[10];
    int i;

    generateBracket(out, n, 0, 0, 0);

    return 0;
}