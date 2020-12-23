// Hiding Places
// Breadth-First Search Demo

#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000 // 1B, 1 with 9 zeroes

typedef pair<int, int> ii; // so that I can shorten 14 characters of "pair<int, int>" into just 2 characters

int main() {
  freopen("in_hidingplaces.txt", "r", stdin); // you can save the sample input as in_hidingplaces.txt and use the input redirection command so that scanf/cin reads from that input file instead from keyboard, but DO NOT FORGET TO COMMENT THIS OUT BEFORE SUBMISSION
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int dr[] = { 1, 2, 2, 1,-1,-2,-2,-1}; // a very convenient technique for grid-based graphs (so that we can build the graph 'on-the-fly')
  int dc[] = { 2, 1,-1,-2, 2, 1,-1,-2}; // that's it, not ALL graphs need to be stored in graph data structure (AM/AL/EL), this one does not...

  int n;
  cin >> n;
  while (n--) {
    string source;
    cin >> source;
    int r = 8-(source[1]-'0'), c = source[0]-'a';
    // cout << "DEBUG: source (" << r << ", " << c << ")\n";

    int D[10][10];
    for (int i = 0; i < 10; i++)
      for (int j = 0; j < 10; j++)
        D[i][j] = INF;
    D[r][c] = 0; // distance of source to source is 0, max_dist is at least 0 too
    int max_dist = 0;
    queue<ii> q;
    q.push({r, c}); // {r, c} is a shortcut for make_pair(r, c)

    while (!q.empty()) { // run BFS
      ii f = q.front(); q.pop();
      r = f.first; c = f.second;

      for (int dir = 0; dir < 8; dir++) {
        int nr = r+dr[dir], nc = c+dc[dir];
        if (nr < 0 || nr >= 8 || nc < 0 || nc >= 8) continue; // outside chessboard, invalid
        if (D[nr][nc] == INF) { // (nr, nc) has not been visited before by BFS
          D[nr][nc] = D[r][c]+1; // visit it (i.e. 'relax((r, c), (nr, nc), 1)')
          max_dist = max(max_dist, D[nr][nc]); // keep the running max
          q.push({nr, nc}); // maintain the FIFO order so that we deal with vertices that are closer to source first
        }
      }
    }

    // cout << "DEBUG-(for your convenience, do not forget to comment out)-\n";
    // cout << "r\\c";
    // for (int j = 0; j <= 7; j++) cout << " " << (char)('a'+j);
    // cout << endl;
    // for (int j = 0; j <= 8; j++) cout << "---";
    // cout << endl;
    // for (int i = 0; i <= 7; i++) {
    //   cout << (8-i) << "  :";
    //   for (int j = 0; j <= 7; j++)
    //      cout << D[i][j] << (D[i][j] == max_dist ? '*' : ' ');
    //   cout << endl;
    // }
    // cout << "END DEBUG\n";
  
    cout << max_dist; // output max_dist value
    for (int i = 0; i <= 7; i++)
      for (int j = 0; j <= 7; j++)
        if (D[i][j] == max_dist)
          cout << " " << (char)('a'+j) << (8-i); // map the (i, j) back to chess notation
    cout << endl;
  }
  return 0;
}
