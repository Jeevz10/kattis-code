#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("showroom2.in","r",stdin);
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n,m;
	
	cin >> n >> m;
	
	vector<vector<int>> visited;
	visited.resize(n, vector<int>(m, 0));
	
	vector<string> AL;
	
	for (int i = 0;i < n;i++) {
		string str;
		cin >> str;
		AL.push_back(str);
	}
	
	int car_r,car_c;
	
	int time = 0;
	cin >> car_r >> car_c;
	
	--car_r;
	--car_c;
	
	queue<pair<int,int> > q;
	
	q.push(make_pair(car_r,car_c));
	visited[car_r][car_c] = 1;
	
	int count,r,c,nr,nc,answ;
	
	int dr[] = {0,0,1,-1};
	int dc[] = {1,-1,0,0};
	
	while (!q.empty()) {
		r = get<0>(q.front());
		c = get<1>(q.front());
		char ch = AL[r][c];
		q.pop();
		
		if (AL[r][c] == 'D' && (r == 0 || r == n-1 || c == 0 || c == m-1)) {
			answ = visited[r][c];
			break;
		}
	
	//	cout << r << c << endl;
		
		for (int i = 0; i < 4;i++) {
			nr = r + dr[i];
			nc = c + dc[i];
			
			if (nr < 0 || nr >= n || nc < 0 || nc >= m) {
				continue;
			}
			if (AL[nr][nc] == '#') {
				continue;
			}
			/*
			if (visited[nr][nc] > 0) {
				continue;
			}
			*/
			if (AL[nr][nc] == 'D') {
				visited[nr][nc] = visited[r][c];
				q.push(make_pair(nr,nc));
			}
			else if ( AL[nr][nc] == 'c') {
				visited[nr][nc] = visited[r][c] + 1;
				q.push(make_pair(nr,nc));
			}
			
		}
	}
	
	cout << answ << endl;
	return 0;
	/*
	for (int i = 0;i < n;i++) {
		cout << AL[i] << endl;
	}*/
}

