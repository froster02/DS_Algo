#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<int> adj[], int x, int y){
    adj[x].push_back(y);
    adj[y].push_back(x);
}

void print(vector<int> adj[], int v){
    for(int i = 0; i < v; i++){
        cout << i << " ";
        for(auto x : adj[i])
            cout << "->" << x;
        cout << endl;
    }
}

int main(){

    int v = 5;
    vector<int> adj[v];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);

    print(adj, v);

    return 0;
}