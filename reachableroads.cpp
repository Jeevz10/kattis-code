#include <bits/stdc++.h>
using namespace std;

// reachable roads
void DFS(int u, vector< vector<int> > &AL, vector<int> &visited) {
	visited[u] = 1;
	
	for (auto &it: AL[u]) {
		if (visited[it] == 0) {
			DFS(it,AL,visited);
		}
	}
}

int main() {
	int tc;
	
	cin >> tc;
	
	for (int i = 0;i < tc;i++) {
		int endpoints;
		
		cin >> endpoints;
		
		vector< vector<int> > AL;
		AL.assign(endpoints,vector<int>());
		
		int num;
		
		cin >> num;
		
		for (int j = 0;j < num;j++) {
			int u,v;
			
			cin >> u >> v;
			
			AL[u].push_back(v);
			AL[v].push_back(u);
		}
		
		int CC = 0; 
		vector<int> visited;
		
		visited.assign(endpoints,0);
		
		for (int j = 0;j < endpoints;j++) {
			if (visited[j] == 0) {
				CC++;
				DFS(j,AL,visited);
			}
		}
		
		cout << CC - 1 << endl;
	}
}

