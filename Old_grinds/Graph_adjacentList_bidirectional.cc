#include <iostream>
#include <unordered_map>
#include <list>
#include <cstring>
using namespace std;

unordered_map<string, list<pair<string, int> > > l;

void addEdge(string x, string y, bool bidir, int wt){
    l[x].push_back(make_pair(y, wt));
    if(bidir)
        l[y].push_back(make_pair(x, wt));
}

void printList() {
    for(auto p : l){
        string city = p.first;
        list<pair<string, int> > nbrs = p.second;

        cout << city << "->";
        for(auto i: nbrs){
            string dest = i.first;
            int dist = i.second;

            cout << dest << " " << dist << ", ";
        }
        cout << endl;
    }
}

int main(){

    addEdge("A", "B", true, 20);
    addEdge("B", "D", true, 40);
    addEdge("A", "C", true, 10);
    addEdge("C", "D", true, 40);
    addEdge("A", "D", false, 50);

    printList();

    return 0;
}