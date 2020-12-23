// Copy paste this C++ Template and save it as "Labor.cpp"
#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000
// year 2017 Sem2 hash code: WxxVfOfqw6Be7Cyq2acb (do NOT delete this line)

typedef pair<int, int> ii;

// We set V, Q, and AdjList to be global variables so that they are directly accessible in all other methods/functions
// But if you want to refactor this template code to avoid any global variable, you can do so
int V; // number of vertices in the graph (number of junctions in Singapore map)
int Q; // number of queries
int required_k,source,destination;
vector<vector<ii>> AdjList;
vector<vector<int> > shortest; // the weighted graph (the Singapore map), the length of each edge (road) is stored here too, as the weight of edg
int dist = 0;
queue<int> q;
priority_queue<ii,vector<ii>,greater<ii> >pq;

  // Write necessary code to preprocess the graph, if needed
  //
  // write your answer here
  //------------------------------------------------------------------------- 



  //------------------------------------------------------------------------- 


int Query(int s, int t, int k) {
  // You have to report the shortest path from Steven and Grace's current position s
  // to reach their chosen hospital t, output -1 if t is not reachable from s
  // with one catch: this path cannot use more than k vertices
  //
  // write your answer here
  //------------------------------------------------------------------------- 

  /*
  for (auto &it : q) {
  	if (it == destination) {
  		status = 1;
  		return 0;
	  }
	else {
		return Query(s,destination,k) + 1;
	}
  }
  */
  
  while (!pq.empty()) {
  	pq.pop();
  }
  
  pq.push(pair<int, ii>(0,ii(1,s)));
  vector< vector<int> > distance;
  
  for (i = 0;i < V;i++) {
  	distance.push_back(vector<int>());
  	distance[i].assign(k+1,INF);
  }
  
  distance[s][1] = 0;
  
  while (!pq.empty()) {
  	
  	pair<int, ii > min_edge = pq.top();
  	pq.pop();
  	
  	int x = min_edge.second.second, y = min_edge.first, z = min_edge.second.first;
  	
  	if (distance[x][z] == y) {
  		if (x == t) {
  			return y;
		  }
		
		if (z < k) {
			vector<ii> neg = AdjList[x];
			
			for (int j = 0;j < neg.size();j++) {
				int v = neg[j].first, t = neg[j].second;
				
				if (distance[v][z+1] > distance[x][z] + t) {
					distance[v][z+1] = distance[x][z] + t;
					pq.push(pair<int, ii> (distance[v][z+1],ii (z+1,v)));
				}
			}
		}
	  }
  }
  
  return -1;
}


void Preprocess() {
	for (int i = 0;i < V;i++) {
		
		if (i > 9) {
			break;
		}
		vector< vector <int> > distance;
		
		for (int k = 0; k < V;k++) {
			distance.push_back(vector<int>());
			distance[k].assign(V,INF);
		}
		
		distance[i][i] = 0;
		
		priority_queue<ii,vector<ii>,greater<ii> >pq;
		
		pq.push(make_pair(0,i));
		
		int v,weight;
		
		while(!pq.empty()) {
			
			int u = pq.top().second;
			pq.pop();
			
			for (auto &it : AdjList[u]) {
				
				 v = it.first;
				 weight = it.second;
				
				if (distance[v] > distance[u] + weight) {
					distance[v] = distance[u] + weight;
					pq.push(make_pair(distance[v],v));
				}
			}
		}
	
	for (int j = 0; j < V; j++) {
        shortest[i].push_back(distance[j]);
    }
	/*
		cout << i << ' ';
		for (auto &it : distance) {
			cout << it << ' ';
		}
		cout << endl;  */
	}
}
// You can add extra function(s) if needed
// --------------------------------------------

// --------------------------------------------

int main() {
    freopen("PS5C.in","r", stdin);
	
  int TC;
  scanf("%d", &TC);

  while (TC--) {
    int j, k, w;
    scanf("%d", &V);
    // clear the graph and read in a new graph as Adjacency List
    AdjList.assign(V, vector<ii>());
    shortest.assign(V,vector<int>());
     
    for (int i = 0; i < V; i++) {
      scanf("%d", &k);
      while (k--) {
        scanf("%d %d", &j, &w);
        AdjList[i].emplace_back(j, w); // edge (road) weight (in minutes) is stored here
      }
    }
	
	int count = 0;
	
	/*
	for (auto it : AdjList) {
		cout << count << ' ';
		count++;
		for (auto itr : it) {
			cout << itr.first << ' ';
		}
		cout << endl;
	}*/
    
//	steps();
  //  Preprocess();

    scanf("%d", &Q);
    while (Q--) {
      	scanf("%d %d %d", &source, &destination, &required_k);
  	  
		  
      	printf("%d\n", Query(source, destination, required_k));
    }

    if (TC)
      printf("\n");
  }
  return 0;
}
