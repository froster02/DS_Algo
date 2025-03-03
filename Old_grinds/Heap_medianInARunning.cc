#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

int main() {

    priority_queue <int> leftHeap; //max heap
    priority_queue <int, vector <int> , greater <int> > rightHeap; //min heap

    int d;
    cin >> d;

    //push the first data into the heap
    leftHeap.push(d);

    float med = d;
    //first median will be the first element itself
    cout << "Med : " << med << " " << endl;
    cin >> d;

    while (d != -1) {
        //logic

        //if left heap is greater
        if (leftHeap.size() > rightHeap.size()) {
            // *to satisfy (n+1) property
            //if data is less than median put it into left heap first then operate
            if(d < med){
                rightHeap.push(leftHeap.top());
                leftHeap.pop();
                leftHeap.push(d);
            } else {
                rightHeap.push(d);
            }
            //as both the heap will have equal size (n+1) so find median here only
            med = (leftHeap.top() + rightHeap.top()) / 2.0;
        //if both heap have size (n)
        } else if(leftHeap.size() == rightHeap.size()){
            
            if(d < med){
                leftHeap.push(d);
                med = leftHeap.top();
            } else {
                rightHeap.push(d);
                med = rightHeap.top();
            }
        //if right heap is greater
        } else {
            //if data is less than median put it into right heap first then operate
            if(d > med){
                leftHeap.push(rightHeap.top());
                rightHeap.pop();
                rightHeap.push(d);
            } else {
                leftHeap.push(d);
            }
            //as both the heap will have equal size (n+1) so find median here only
            med = (leftHeap.top() + rightHeap.top()) / 2.0;
        }

        //print median at every step
        cout << "Med : " << med << endl;
        cin >> d;
    }
    return 0;
}