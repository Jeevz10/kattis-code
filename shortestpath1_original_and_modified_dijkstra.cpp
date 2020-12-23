#include <bits/stdc++.h>
using namespace std;

#define INF 1e9 // good idea to define INF as macro, so that you don't encounter silly bug involving accidental zero(es)

// Disclaimer: typedef is NOT really encouraged in Software Engineering at it forces
// other readers of your code to map basic data type to some other funny names of your own
// USE WITH CAUTION!
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int main() {
  // freopen("in_shortestpath1.txt", "r", stdin);
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int n, m, q, s;
  while (cin >> n >> m >> q >> s, (n || m || q || s)) {
    int u, v, w, d;
    vector<vii> AL(n, vii());
    while (m--) {
      cin >> u >> v >> w;
      AL[u].emplace_back(v, w); // directed edge
    }

    // compute the shortest path values, using Dijkstra's, confirm TLE if you use Bellman Ford's
    vi dist(n, INF);
    dist[s] = 0;

    /*
    // The code for a proper implementation of the original version of Dijkstra's algorithm is as shown below
    set<ii> pq;
    pq.insert({0, s});
    for (u = 0; u < n; u++) // O(V log V) already
      if (u != s)
        pq.insert({INF, u});

    // analysis: each vertex and edge going to be touched once
    // each vertex will cause O(log V) find min/delete min, and
    // every edge will causes O(log V) PQ update operations
    // overall: the famous O((V+E) * log V) analysis of Dijkstra's algorithm
    while (!pq.empty()) {
      ii front = *pq.begin(); // this is the min, O(log V)
      pq.erase(pq.begin()); // erase / extract min, O(log V), twice
      // front = (d, u), decompose it
      d = front.first; // this value is actually the same as dist[u]
      u = front.second;

      for (auto &v_weight : AL[u]) { // for all neighbors of vertex u, O(k)
        v = v_weight.first;
        w = v_weight.second;
        if (dist[u]+w < dist[v]) { // if can relax this edge, O(1)
          // update/decrease PQ value :O
          pq.erase(pq.find({dist[v], v})); // delete the old one, O(log V) twice
          dist[v] = dist[u]+w; // O(1)
          pq.insert({dist[v], v}); // delete the old one, O(log V)
        }
      }
    }
    */

    // This is the Modified version of Dijkstra's algorithm
    // overall analysis: if performed on non-negative weighted graph, the performance is EXACTLY O((V+E) log V)
    // if given killer input graph involving negative weight edge (and especially negative weight cycle) for this algorithm, it can be very bad :(
    // but this modified version can deal with graphs that have a few negative weight edges (as long as there is no negative weight cycle)
    priority_queue<ii, vector<ii>, greater<ii>> pq;
    pq.push({0, s}); // if you use wrong priority queue, you will degenerate Modified Dijkstra's into a kind of Bellman Ford's
    while (!pq.empty()) {
      ii min_ii = pq.top(); pq.pop(); // O(1) + O(log V)
      d = min_ii.first; u = min_ii.second;
      if (dist[u] < d) continue; // if you uncomment this, you will degenerate Modified Dijkstra's into a kind of Bellman Ford's
      for (auto &v_weight : AL[u]) {
        v = v_weight.first; w = v_weight.second;
        if (dist[u]+w < dist[v]) { // if I can relax this edg
          dist[v] = dist[u]+w;
          pq.push({dist[v], v}); // O(log V), insert the new pair, with lower dist[v], we don't care about the old/inferior {dist[v], v}, we will delete it later :)
        }
      }
    }

    int t;
    while (q--) {
      cin >> t;
      if (dist[t] == INF) cout << "Impossible\n";
      else cout << dist[t] << "\n";
    }
    cout << endl;
  }

  return 0;
}
