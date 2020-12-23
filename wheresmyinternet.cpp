#include <bits/stdc++.h>
using namespace std;

void DFS (int i,vector < vector<int> > &AL,vector<int> &visited) {
	visited[i] = 1;
	for (auto &v: AL[i]) {
		if (!visited[v]) {
			DFS(v,AL,visited);
		}
	}
}

int main() {
	int houses,num;
	
	cin >> houses >> num;
	
	vector < vector<int> > AL;
	
	AL.assign(houses, vector<int> ());
	
	for (int i = 0;i < num;i++) {
		int u,v;
		
		cin >> u >> v;
		u--;
		v--;
		
		AL[u].push_back(v);
		AL[v].push_back(u);
	}
	
	vector<int> visited;
	int CC = 0;
	visited.assign(houses,0);
	set<int> rank;
	
	for (int i = 0;i < houses;i++) {
		if (visited[i] == 0) {
			CC++;
			if (CC == 1) {
				DFS(i,AL,visited);
			}
		}
	}
	int status = 0;
	
	for (int i = 0;i < houses;i++) {
		if (visited[i] == 0) {
			status = 1;
			int num = i;
			num++;
		//	cout << num << endl;
			rank.insert(num);
		}
	}
	
	if (status == 0) {
		cout << "Connected\n"; // gotta check if all visited or not
	}
	else {
		for (auto &it: rank) {
			cout << it << endl;
		}
	}
	
	return 0;
}

