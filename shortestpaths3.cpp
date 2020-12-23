#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX
#define MINF INT_MIN
typedef tuple<int,int,int> iii;

int main() {
//	freopen("shortestpaths.in","r",stdin);
	int n,m,q,s;
	
	while (cin >> n >> m >> q >> s && (n || m || q || s)) {
		
		vector<iii> EL;

		
		for (int i = 0; i < m;i++) {
			int u,v,w;
			
			cin >> u >> v >> w;
			
			EL.push_back(make_tuple(u,v,w));
		}
		
		vector<int> dist;
		dist.assign(n,INF);
		dist[s] = 0;
		
		for (int i = 0;i < n-1;i++) {
			for (int j = 0;j < m;j++) {
				
				int src,dest,weight;
				
				src = get<0>(EL[j]);
				dest = get<1>(EL[j]);
				weight = get<2>(EL[j]);
				
				if (dist[src] != INF && dist[src] + weight < dist[dest]) {
					dist[dest] = dist[src] + weight;
				}
			}
		}
		
		for (int i = 0;i < n-1;i++) {
			for (int j = 0;j < m;j++) {
				
				int src,dest,weight;
				
				src = get<0>(EL[j]);
				dest = get<1>(EL[j]);
				weight = get<2>(EL[j]);
				
				if (dist[src] != INF && dist[src] + weight < dist[dest]) {
					dist[dest] = MINF;
				}
			}
		}
		
		for (int i = 0;i < q;i++) {
			
			int r;
			cin >> r;
			
			if (dist[r] == INF) {
				cout << "Impossible\n";
			}
			else if (dist[r] == MINF) {
				cout << "-Infinity\n";
			}
			else {
				cout << dist[r] << endl;
			}
		}
		
		cout << endl;
	}
}

