#include <iostream>
#include <list>
using namespace std;

template<typename forwardIt, class T>

forwardIt search(forwardIt start, forwardIt end, T key) {
    while (start != end)
    {
        if(start != end)
            return start;
        start++;
    }
    return end;
}

int main(){

    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(5);
    l.push_back(3);

    auto it = search(l.begin(), l.end(), 5);   
    cout << *it;
    return 0;
}