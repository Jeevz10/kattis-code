#include <bits/stdc++.h>
using namespace std;

vector<string> AL;
int r,c;
int CC = 0;
int visited[101][101] = {{0}};
int count = 0;

void DFS(int i,int j) {
	if( i<0 || i==r || j<0 || j==c || AL[i][j] == '.' || visited[i][j] == 0) {
		return;
	}

	count++;

	
	DFS(i+1,j); //right
	DFS(i-1,j); // left
	DFS(i,j+1); //up
	DFS(i,j-1); //down
	DFS(i+1,j+1) // diagnoal right
	DFS(i-1.j+1); // diagonal left
	DFS(i+1,j-1); // diagonal down right
	DFS(i-1,j-1); // diagonal down left
	
}


int main() {
	cin >> r >> c;
	
	for (int i = 0;i < r;i++) {
		string ch;
		AL.push_back(ch);
	}
	
	for (int i = 0;i < r;i++) {
		for (int j = 0;j < c;j++) {
			if (visited[i][j] == 0) {
				DFS(i,j);
			}
		}
	}
	
	cout << CC << endl;
}

