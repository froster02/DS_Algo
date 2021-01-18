#include <iostream>
#include <stack>
using namespace std;

void transfer(stack<int> s1, stack<int> s2, int n){
    for(int i = 0 ; i<n; i++){
        //pop elements from s1 & push them to s2
        s2.push(s1.pop());
        //lose the reference for top element
        s1.pop();
    }
}

void reversalStack(stack<int> &s1) {
    //create a temporay stack
    stack<int> s2;
    //create a variable for length of s1
    int n = s1.size();
    //run a loop upto n
    for(int i = 0; i < n; i++){
        //store the top element in a variable
        int x = s1.pop();
        //pop out the top element to remove it as we already have store a copy in x variable
        s1.pop();

        //transfer the remaining elements in another stack
        transfer(s1, s2, (n-i-1));

        s1.push(x);

        transfer(s2, s1, (n-i-1));

    }
}

int main(){

    stack<int> s1;

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    reversalStack(s1);

    return 0;
}