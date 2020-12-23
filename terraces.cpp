#include <bits/stdc++.h>
using namespace std;

// terraces
int r,c;

int visited[1000][1000] = {{0}}; // 0 for unvisited, 1 visited 
int AL[502][502];
int CC;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
bool status_overflow;
int current;

void DFS(int x,int y) {
	
	if (x <0 || y < 0 || x >= r || y >= c || AL[x][y] > current) {
		return;
	}
	
	if ( AL[x][y] < current) {
		status_overflow = true;
		return;
	}
	
	if (visited[x][y] == 1) {
		return;
	}
	
	visited[x][y] = 1;
	CC++;
	
//	cout << CC;
	
	DFS(x+1,y);
	DFS(x-1,y);
	DFS(x,y+1);
	DFS(x,y-1);
	
}
int main() {
	
	//freopen ("terraces1.in","r",stdin);
	cin >> c >> r;
	
	int answ = 0;
	int in;
	
	for (int i = 0;i < r;i++) {
		for (int j = 0;j < c;j++) {
			cin >> AL[i][j];
		}
	}
	/*
	for (int i = 0;i < r;i++) {
	    for (int j = 0;j < c;j++) {
	        cout << AL[i][j];
	    }
	    cout << endl;
	}
	*/
	for (int i = 0;i < r;i++) {
		for (int j = 0; j < c;j++) {
			
			if (visited[i][j] == 0) {
				current = AL[i][j];
				status_overflow = false ;
				CC = 0;
				DFS(i,j);
				
				if (status_overflow == false) {
					answ += CC;
				}		
			}
		}
	}
	
	cout << answ << endl;
}

