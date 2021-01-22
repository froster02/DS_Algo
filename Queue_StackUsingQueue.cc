#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class Stack {
    queue<T> q1, q2;

public:
    void insert(T x){
        q1.push(x);
    }
    void remove(){
        //remove the last added element from q1
        //move first n-1 element in q2
        //interchange name of q1, q2
        if(q1.empty()){
            return;
        }
        while(q1.size() > 1){
            // T element = q1.front();
            // q2.push(element);
            q2.push(q1.front());
            q1.pop();
        }
        //remove the last element
        q1.pop();
        //swap name of q1 and q2
        swap(q1, q2);
    }
    
    int displayTop(){
        while(q1.size() > 1){
            q2.push(q1.front());
            q1.pop();
        }
        //1 element in q1
        T element = q1.front();
        q1.pop();
        q2.push(element);

        swap(q1, q2);

        return element;
    }

    int size(){
        return q1.size() + q2.size();
    }
    bool empty(){
        return size() == 0;
    }
};

int main(){

    Stack<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);

    while(!s.empty()){
        cout << s.displayTop() << " ";
        s.remove();
    }

    return 0;
}