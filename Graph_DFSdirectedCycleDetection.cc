#include <iostream>
#include <map>
#include <list>
#include <queue>
#include <cstring>
using namespace std;

class Graph{
    list<int> *l;
    int V;

public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int x, int y, bool directed = true){
        //directed graph
        l[x].push_back(y);
        if(!directed)
            l[y].push_back(x);
    }

    bool cycle_helper(int node, bool *visited, bool *stack){
        //visit a node
        visited[node] = true;
        stack[node] = true;

        for(int nbr : l[node]){
            //two cases
            if(stack[nbr] == true)
                return true;
            else if(visited[nbr] == false){
                bool cycle_found = cycle_helper(nbr, visited, stack);
                if(cycle_found == true)
                    return true;
            }
        } 
        //leave a node
        stack[node] = false;

        return false;
    }

    bool contains_cycle(){
        bool *visited = new bool[V];
        bool *stack = new bool[V];

        for(int i = 0; i < V; i++)
            visited[i] = stack[i] = false;
    
        return cycle_helper(0, visited, stack);
    }
};

int main(){

    Graph g(6);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 2);
    g.addEdge(3, 4);
    g.addEdge(4, 5);

    if(g.contains_cycle())
        cout << "Yes Cycle Exists";
    else 
        cout << "No Cycle Exists";

    return 0;
}