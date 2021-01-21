#include <iostream>
using namespace std;

class Queue {
    int * arr;
    int f, r, cs, ms;
    public:
        //queue will hold upto 5 elements only
        Queue(int ds = 5) {
            arr = new int[ds];
            cs = 0;
            ms = ds;
            f = 0;
            //f will point at front, r points to r
            r = ms - 1;
        }

    bool empty() {
        return cs == 0;
    }

    bool full() {
        return cs == ms;
    }

    void push(int data) {
        if (!full()) {
            //if queue is not full then r will point to the next index upto where the queue is being filled
            r = (r + 1) % ms;

            arr[r] = data;
            cs++;
        }
    }

    void pop() {
        if (!empty()) {
            f = (f + 1) % ms;
            cs--;
        }
    }

    int front() {
            return arr[f];
        }

    ~Queue() {
        if (arr != NULL) {
            delete[] arr;
            arr = NULL;
        }
    }

};

int main() {

    Queue q;

    for (int i = 1; i <= 5; i++)
        q.push(i);

    q.pop();
    q.pop();

    q.push(7);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}