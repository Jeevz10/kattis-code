#include <bits/stdc++.h>
using namespace std;

int main() {
	
	// freopen("islands.in","r",stdin);
	
	int dr[] = {0,0,-1,1};
	int dc[] = {1,-1,0,0}; 
	int n,m;
	
	cin >> n >> m;
	
	vector< string> AL;
	int visited[51][51] = {0};
	
	for (int i = 0;i < n;i++) {
		string str;
		
		cin >> str;
		
		AL.push_back(str);
	}
	/*
	for (int i = 0;i < n;i++) {
		cout << AL[i] << endl;
	}*/
	
	queue<pair<int,int> > q;
	
	int num = 0;
	
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			
			/*
			for (int i = 0;i < n;i++) {
				cout << AL[i] << endl;
			} */
			
			if (AL[i][j] == 'L' && visited[i][j] == 0) {
				
			//	cout << i << j << endl;
				
				q.push(make_pair(i,j));
				num++;
				visited[i][j] = num;
				
			//	cout << i << j << ' ' << visited[i][j] << endl;
				
				while (!q.empty()) {
					
					pair<int,int> temp;
									
					temp = q.front();
					int r,c;
					
					r = temp.first;
					c = temp.second;
					num = visited[r][c];
					
					q.pop();
					
					int count = 0;
					
					for (int i = 0;i < 4;i++) {
						
						int nr,nc;
						
					
						nr = dr[i] + r;
						nc = dc[i] + c;
						
						if (nr < 0 || nr >= n || nc < 0 || nc >= m || visited[nr][nc] != 0 || AL[nr][nc] == 'W')  {
							continue;
						}
						
			//			cout << nr << nc << endl;
						
						visited[nr][nc] += visited[r][c];
						
						
						
						q.push(make_pair(nr,nc));	
						
						
					}
				
				}				
			}
		}
	}
	
	cout << num << endl;
	return 0;
}

