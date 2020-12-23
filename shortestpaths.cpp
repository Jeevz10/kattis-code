#include <bits/stdc++.h>
using namespace std;
#define INF 1e9
typedef pair<int,int> ii;

int main() {
	
//	freopen("shortestpaths.in","r",stdin);
	
	int n,m,q,s;
	
	while (cin >> n >> m >> q >> s && (n || m || q || s)) {
		
		vector < vector<ii> > AL;
		AL.assign(n,vector<ii>());
	
		for (int i = 0;i < m;i++) {
			int u,v,w;
		
			cin >> u >> v >> w;
	
			AL[u].push_back(make_pair(v,w));
	//	AL[u].emplace_back(v,w);
		}
	
		vector<int> dist;
	
		dist.assign(n,INF);
		dist[s] = 0;
	
		priority_queue<ii, vector<ii>, greater<ii>> pq;
	
		pq.push(make_pair(0,s));
	
		while (!pq.empty()) {
			ii temp = pq.top();
			pq.pop();
		
			int distance = temp.first;
			int src = temp.second;
		
			if (dist[src] < distance) {
				continue;
			}
		
			for (auto &it:AL[src]) {
				int v = it.first; 
				int w = it.second;
        	
				if (dist[src]+w < dist[v]) { 
          			dist[v] = dist[src]+w;
          			pq.push({dist[v], v}); 
				}
			}
		}
	
		for (int i = 0;i < q;i++) {
		
			int r;
		
			cin >> r;
		
			if (dist[r] == INF) {
				cout << "Impossible\n";
			}
			else {
				cout << dist[r] << endl;
			}
		}
	/*
	int count = 0;
	
//	cout << AL[1].size();
	
	for (auto &it: AL) {
		cout << count << ' ';
		for (auto &itr: it) {
			cout  << itr.first << ' ' << itr.second;
		}
		count++;
		cout << endl;
	}
	*/
	/*
	for (int i = 0;i < n;i++) {
		int size = AL[i].size();
		
		for (int j = 0;j < size;j++) {
			cout << AL[i][j];
		}
		cout << endl;
	}*/
	
	cout << endl;
	}
	
	
	
	return 0;
}

