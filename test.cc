#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void topohelp(vector<int> graph[], bool visited[], stack<int> &st, int i){
	visited[i] = true;
	int n = graph[s].size();

	for(int i = 0; i < n; i++){
		if(!visited[graph[i][j]])
			topohelp(graph, visited, st, graph[i][j]);
	}
	st.push(i);
}

void toposort(vector<int> graph[], int v){
	bool visited[v];

	for(int i = 0; i < v; i++)
		visited[i] = false;
	
	stack<int> st;

	for(int i = 0; i < v; i++){
		if(!visited[i])
			topohelp(graph, visited, st, i);
	}

	whille(!st.empty){
		cout << st.top() << " ";
		st.pop();
	}
}

int main(){

	int v, e, s, d;
	vector<int> graph[v];
	cin >> v >> e;

	for(int i = 0; i < e; i++){
		cin >> s >> d;
		graph[s].push_back(d);
	}

	toposort(graph, v);

	return 0;
}