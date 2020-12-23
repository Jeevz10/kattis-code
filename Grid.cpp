#include <bits/stdc++.h>
using namespace std;

// vector< string > AL;
// int n,m,num;
// queue<tuple<char,int,int,int> > q;

// int dr[] = { 0,0,num,(num*-1)}; // cant do this 
// int dc[] = {num,(num*-1),0,0};  // cant do this

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
//	freopen("Grid.in","r",stdin);
//	int visited[501][501] = {0};
	
	vector< string > AL;
	int n,m,num;
	queue<tuple<int,int> > q;
	
	int status = 0;
	
	cin >> n >> m;
	
	vector<vector<int>> visited;

    visited.resize(n, vector<int>(m, 0));
	// AL.assign(n,"\0"); dont do this as well. not required as u aint creating no array
	for (int i = 0;i < n;i++) {
		string str;
		cin >> str;
		AL.push_back(str);
		// dont do cin >> AL[i]; compiler doesnt know
	}
	visited[0][0] = 1;
	q.push(make_tuple(0,0));
	int r,c,count,ans;
	
	while (!q.empty()) {
		r = get<0>(q.front());
		c = get<1>(q.front());
		char ch = AL[r][c];
	//	cout << r << c << endl;
		
		num = ch - '0';
	//	cout << num;
		q.pop();
		
		
		for (int i = 0;i < 4;i++) {
			int nr,nc;
			
			if (i == 0) {
				nr = r + num;
				nc = c;
			}
			else if (i == 1) {
				nr = r - num;
				nc = c;
			}
			else if (i == 2) {
				nr = r;
				nc = c + num;
			}
			else if (i == 3) {
				nr = r;
				nc = c - num;
			}
			// int nr = r+dr[i], nc = c+dc[i]; cant do this 
			
        	if (nr < 0 || nr >= n || nc < 0 || nc >= m) {
			 	continue;
			}
			
			if (visited[nr][nc] > 0) {
				continue;
			}
			if (nr == n-1 && nc == m-1) {
				ans = visited[r][c];
				status = 1;
				break;
			}
			
			q.push(make_tuple(nr,nc));
			visited[nr][nc] = visited[r][c] + 1;
		}
		
		if (status == 1) {
			break;
		}
	}
	
	if (status == 0) {
		cout << "-1\n";
	}
	
	if (status == 1) {
		cout << ans << endl;
	//	cout << "out\n";
	}

	
	/*
	for (int i = 0;i < n;i++) {
		cout << AL[i] << endl;
	}
	*/
	return 0;
}

