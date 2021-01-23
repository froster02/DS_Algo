#include <iostream>
#include <stack>

using namespace std;

int isValid(char * s) {

    stack < char > stk;
    int c = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if (ch == '(') {
            stk.push(ch);

        } else if (ch == ')') {

            if (stk.empty() || stk.top() != '(') {
                return 0;
            }
            stk.pop();
        }
    }
    return c;
}

int main() {

    cout << endl;
    char s[50] = "(())";

    if (isValid(s))
        cout << "true";
    else
        cout << "false";
    cout << endl;
    return 0;
}