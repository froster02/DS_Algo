#include <iostream>
#include <stack>
using namespace std;

void insertAtButtom(stack<int< &s, int x){
    //base case 
    if(s.empty()){
        s.push(x);
        return;
    }
    //rec case
    int data = s.top();
    s.pop();
    insertAtButtom(s,x);
    s.push(data);
}

void reverseStack(stack<int> &s){
    //base case 
    if(s.empty())
        return;
    
    //pop out the top element and insert it at the bottom of 'reversed smaller stack'
    int x = s.top();
    s.pop();
    //rec reverse the smaller stack
    reverseStack(s);
    insertAtBottom(s, x);
}

int main() {

    stack<int> s;
    
    for(int i = 1; i <=5; i++)  
        s.push(i);
    
    while (!s.empty()) {
        cout << s.top() << ", ";
        s.pop();
    }

    for(int i = 1; i <=5; i++)  
        s.push(i);
    
    cout << endl;
    reverseStack(s);
    while(!s.empty()){
        cout << s.top() << ", ";
        s.pop();
    }

    return 0;
}