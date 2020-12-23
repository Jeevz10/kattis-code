#include <bits/stdc++.h>
using namespace std;
typedef pair<int,float> ii;

#define INF INT_MIN

int main() {
//	freopen("shortestpaths.in","r",stdin);
	
	int n,m;
	
	while (cin >> n >> m && (n || m)) {
		
		vector< vector<ii> > AL;
		
		AL.assign(n,vector<ii>());
		
		for (int i = 0;i < m;i++) {
			int p,q;
			float r;
			
			cin >> p >> q >> r;
	
			AL[p].push_back(make_pair(q,r));
			AL[q].push_back(make_pair(p,r));
		}
		
		int count = 0;
	
//	cout << AL[1].size();
	/*
	for (auto &it: AL) {
		cout << count << ' ';
		for (auto &itr: it) {
			cout  << itr.first << ' ' << itr.second;
		}
		count++;
		cout << endl;
	}*/
		vector<float> dist;
		
		dist.assign(n,INF);
		
		dist[0] = 1.0;
		
		priority_queue<ii> pq;
		
		pq.push(make_pair(1.0,0));
		
		bool status = false;
		
		while (!pq.empty()) {
			
			ii temp = pq.top();
			pq.pop();
			
			int distance = temp.first;
			int src = temp.second;
			
			/*
			if (dist[src] > distance) {
				continue;
			}
			*/
			for (auto &it : AL[src]) {
				int v = it.first;
				float w = it.second;
				
				if (dist[src]*w > dist[v]) {
				//	cout << v << ' ' << dist[v] << ' ' ;
					dist[v] = dist[src]*w;
				//	cout << dist[v] << endl;
				
					if (v == n -1) {
						status = true;
					}
					pq.push(make_pair(dist[v],v));
				}
			}
		}
		if (status == true) {
			cout << fixed << setprecision(4) << dist[n-1] << endl;
		}
		else {
			cout << "1.0000\n";
		}
		
		
	}
	
	return 0;
}

