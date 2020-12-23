#include <bits/stdc++.h>
using namespace std;



int main() {
	int tc;
	char arr[8][8] = {{0}};
	int dx[] = {2,2,-2,-2,1,-1,1,-1};
	int dy[] = {1,-1,1,-1,2,2,-2,-2};
	
	cin >> tc;
	char max_d;
	int nx,ny;
	for (int i = 0;i < tc;i++) {
		char input;
		int x,y;
		
		cin >> input >> y;
		
		x = input - 'a';
		
		int nx,ny;
		queue<pair <int,int> > q;
		
		q.push({x,y});
		
		while (!q.empty()) {
			
			int r = q.front().first;
			int c = q.front().second;
			
			for (int k = 0;k < 8;k++) {
				nx = x + dx[k];
				ny = y + dy[k];
				
				
				if (nx < 0 || ny < 0 || nx >= r || ny >= c || arr[nx][ny] == '1') {
					continue;
				}
				
				if (arr[nx][ny] == '0') {
					arr[nx][ny] = arr[r][c] + 1;
					max_d = max(max_d,arr[nx][ny]);
				}
				q.push({nx,ny});
			}
		}
	}
	
}

