#include <bits/stdc++.h>
using namespace std;

/*counting stars
char bit[105][105];
int dx[] = {0, 0, -1, 1};   0 0 -1 1 1 1 -1 -1
int dy[] = {-1, 1, 0, 0};	1 -1 0 0 1 -1 -1   1
int dfs(int x, int y) {
	if (bit[x][y] == '#') return;
	
	int maxNeighbours = .. own value
	for (int k = 0; k < 4; ++k) {
		int nx = x + dx[k];
		int ny = y + dy[k];
		if (nx < 0 || ny < 0 || nx >= r || ny >= c) continue;
		if (bit[nx][ny] == '#') continue;
		
		maxNeighbours = max(maxNeighbours, dfs(nx, ny));
	}
	return maxNeighbours;
} */
/*
void DFS(int r,int c,int i,int j,vector<string> &log) { // you dont want to change the original value of i and j
    log[i][j] = '#';
    
    if (r > i + 1 && log[i+1][j] == '-' ) { //down
        DFS(r,c,i+1,j,log);
    }
    else if (i > 0 && log[i-1][j] == '-' ) { //up
        DFS(r,c,i-1,j,log);
    }
    else if (c > j + 1 && log[i][j+1] == '-') { //right
        DFS(r,c,i,j+1,log);
    }
    else if (j > 0 && log[i][j-1] == '-') { // left
        DFS(r,c,i,j-1,log);
    }
}
*/

void DFS(int r,int c,int i,int j, vector<string> &log){
    if( i<0 || i==r || j<0 || j==c || log[i][j] == '#')
        return;
    log[i][j] = '#';
    DFS( r,c,i, j+1,log);
    DFS( r,c,i, j-1,log);
    DFS( r,c,i+1, j,log);
    DFS( r,c,i-1, j,log);

}

int main() {
	int r,c;
	
	int count2 = 1;
	while (cin >> r >> c) {
		string ch;
		
		vector < string > log;
	//	log.assign(r, vector<char>());  // to initialize 2D Vector
		for (int i = 0;i < r;i++) {
			cin >> ch;
			log.push_back(ch);
		}
		
		int CC = 0;
		
		for (int i = 0;i < r;i++) {
		    for (int j = 0;j < c;j++) {
		        if (log[i][j] == '-') {
		            CC++;
		      //      cout << i << ' ' << j << endl;
		      //      cout << CC << endl;
		            DFS(r,c,i,j,log);
		        }
		    }
		}
		
		cout << "Case" << " " << count2 << ": " << CC << endl;
        count2++;
        /*
		for (int i = 0;i < r;i++) {
			for (int j = 0;j < c;j++) {
				cout << log[i][j];
			}
			cout << endl;
		}*/
	}
	
	return 0;
}

