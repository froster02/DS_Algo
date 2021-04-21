#include <list>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

class graph
{
	vector<vector<bool> > _graph;

public:
	graph(int n){
		_graph = vector<vector<bool>>(n, vector<bool>(n, 0));
	}

	void inputGraph()
	{
		int temp;
		for (auto &x : _graph)
			for (auto &y : x)
				cin >> temp, y = temp;
	}

	void add_edge(int a, int b)
	{
		if (a == b)
			return;
		_graph[a][b] = 1;
	}

	bool has_edge(int a, int b)
	{
		if (a < 0 || b < 0 || a > _graph.size() || b > _graph.size())
			return false;
		return _graph[a][b];
	}

	int count_nodes() { return _graph.size(); }

	int count_edges()
	{
		int count = 0;
		for (auto &x : _graph)
			for (auto &y : x)
				if (y)
					++count;
		return count;
	}

	int count_edges(int n)
	{
		int count = 0;
		for (auto &x : _graph[n])
			if (x)
				++count;
		return count;
	}

	vector<int> bfs(int n)
	{
		vector<bool> visited(_graph.size(), false);
		queue<int> q;
		vector<int> dist(_graph.size(), INT_MAX);

		visited[n] = true;
		dist[n] = 0;
		q.push(n);
		while (!q.empty())
		{
			int curr = q.front();
			q.pop();
			// cout << curr << " ";
			for (int i = 0; i < _graph[n].size(); ++i)
			{
				if (!has_edge(curr, i))
					continue;
				if (visited[i])
					continue;
				visited[i] = true;
				dist[i] = dist[curr] + 1;
				q.push(i);
			}
		}
		return dist;
	}

	bool dfs(int n)
	{
		vector<bool> visited(_graph.size(), false);
		return _is_there_a_cycle(n, -1, visited);
	}

	bool _dfs(int n)
	{
		vector<bool> visited(_graph.size(), false);
		visited[n] = true;
		cout << n << " ";
		for (int i = 0; i < _graph[n].size(); ++i)
			if (!visited[i])
				dfs(i);
		return false;
	}

	bool _is_there_a_cycle(int n, int parent, vector<bool> &vis)
	{
		vis[n] = true;
		for (int i = 0; i < _graph[n].size(); ++i)
		{
			if (!has_edge(n, i))
				continue;
			if (i == parent)
				continue;
			if (vis[i])
				return true;
			if (_is_there_a_cycle(i, n, vis))
				return true;
		}
		return false;
	}

	bool isCyclicUtil(int v, vector<bool> &visited, vector<bool> &recStack)
	{
		if (visited[v] == false)
		{
			visited[v] = true;
			recStack[v] = true;

			for (int i = 0; i != _graph[v].size(); ++i)
			{
				if (!_graph[v][i])
					continue;
				if (!visited[i] && isCyclicUtil(i, visited, recStack))
					return true;
				else if (recStack[i])
					return true;
			}
		}
		recStack[v] = false;
		return false;
	}

	bool isCyclic()
	{
		int V = _graph.size();
		vector<bool> vis(V, false), recStack(V, false);
		for (int i = 0; i < V; i++)
			if (isCyclicUtil(i, vis, recStack))
				return true;

		return false;
	}

	bool is_connected(int a, int b)
	{
		auto &dist = bfs(a);
		return dist[b] != INT_MAX;
	}

	bool isBipartite(int src = 0)
	{
		int V = _graph.size();
		vector<int> colorArr(V);
		for (int i = 0; i < V; ++i)
			colorArr[i] = -1;
		colorArr[src] = 1;
		queue<int> q;
		q.push(src);
		while (!q.empty())
		{
			int u = q.front();
			q.pop();
			if (_graph[u][u] == 1)
				return false;
			for (int v = 0; v < V; ++v)
			{
				if (_graph[u][v] && colorArr[v] == -1)
				{
					colorArr[v] = 1 - colorArr[u];
					q.push(v);
				}
				else if (_graph[u][v] && colorArr[v] == colorArr[u])
					return false;
			}
		}
		return true;
	}

	void print()
	{
		for (auto &x : _graph)
		{
			for (auto &y : x)
				cout << y << " ";
			cout << endl;
		}
	}
};

void solve1()
{
	int n;
	cin >> n;
	graph g(n);
	g.inputGraph();
	int a, b;
	cin >> a >> b;
	--a, --b;
	if (g.is_connected(a, b))
		cout << "Yes Path Exists";
	else
		cout << "No Such Path Exists";
}

void solve2()
{
	int n;
	cin >> n;
	graph g(n);
	g.inputGraph();
	if (g.isBipartite())
		cout << "Yes Bipartite";
	else
		cout << "Not Bipartite";
}

void solve3()
{
	int n;
	cin >> n;
	graph g(n);
	g.inputGraph();
	// g.print();
	if (g.isCyclic())
		cout << "Yes Cycle Exists";
	else
		cout << "No Cycle Exists";
}

int main()
{
	// solve1(); //Q1
	// solve2(); //Q2
	// solve3(); //Q3
	return 0;
}