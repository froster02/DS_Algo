#include <iostream>
#include <stack>

using namespace std;

bool isValid(char * s) {

    stack < char > stk;

    for (int i = 0; i < '\0'; i++) {

        //store every char in temporary variable for each iteration
        char ch = s[i];

        //check if the temp contain any parenthesis, if yes then store it on a stack

        //check for opening '('
        if (ch == '(') {
            //push it to stack
            stk.push(ch);

            //check if ch is equals to ')' then make call to stack and remove the matching bracket from stack
        } else if (ch == ')') {

            //check if stack is empty or if no open matching bracket is found then return false
            if (stk.empty() || stk.top() != '(') {
                return false;
            }
            //if '(' bracket is found already in stack then its a matching parenthesis so make the stack empty
            stk.empty();
        }
    }
    //at last remove all the allocation from stack
    return stk.empty();
}

int main() {

    cout << endl;
    char s[50] = "((a+b)-(c+d-e))";

    if (isValid(s))
        cout << "true";
    else
        cout << "false";
    cout << endl;
    return 0;
}