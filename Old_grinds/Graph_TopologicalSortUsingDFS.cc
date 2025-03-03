#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <cstring>
using namespace std;

template<typename T>

class Graph{
    map<T, list<T> > l;

public:
    void addEdge(T x, T y){
        l[x].push_back(y);
        // l[y].push_back(x);
    }    

    void dfs_helper(T src, map<T, bool> &visited, list<T> &ordering){
        //recursive fun that will traverse the graph
        
        visited[src] = true;
        //go to all nbr of that node that is not visited
        for(T nbr : l[src]){
            if(!visited[nbr])
                dfs_helper(nbr, visited, ordering);
        }

        ordering.push_front(src);

        return;
    }

    void dfs(){
        map<T, bool> visited;
        list<T> ordering;

        //mark all the nodes as not visited in the beginning
        for(auto p : l){
            T node = p.first;
            visited[node] = false;
        }

        //call helper
        //iterate ove all the vertices and init a dfs call
        
        for(auto p : l){
            T node = p.first;
            if(!visited[node]){             
                dfs_helper(node, visited, ordering);
            }
        }
        //return list or print
        for(auto node : ordering){
            cout << node << endl;
        }

    }
};

int main(){

    Graph<string> g;

    g.addEdge("Py", "DP");
    g.addEdge("Py", "PT");
    g.addEdge("Py", "ML");
    g.addEdge("DP", "ML");
    g.addEdge("PT", "DL");
    g.addEdge("ML", "DL");
    g.addEdge("DL", "FR");
    g.addEdge("DS", "FR");

    g.dfs();

    return 0;
}