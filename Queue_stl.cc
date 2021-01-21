#include <iostream>
#include <queue>

using namespace std;

int main() {
    cout << endl;
    queue < int > q;

    for (int i = 0; i <= 5; i++)
        q.push(i);

    while (!q.empty()) {
        cout << q.front() << "<-";
        q.pop();
    }
    cout << endl << endl;
    return 0;
}