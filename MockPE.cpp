#include <bits/stdc++.h>
using namespace std;

int r,c;
vector<string> AL;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

void DFS (int x,int y) {
	AL[x][y] = '.';
	
	for (int k = 0;k < 4;k++) {
		int nx,ny;
		
		nx = x + dx[k];
		ny = y + dy[k];
		
		if (nx < 0 || ny < 0 || nx >= r || ny >= c) {
            continue;
        }
        
        if (AL[nx][ny] == 'v') {
        	DFS(nx,ny);
		}
	}
}

int main() {
	cin >> r >> c;
	getchar();
	int faces = 0,smiles = 0;
	
	string input;
	

	for (int i = 0;i < r;i++) {
		getline(cin,input);
		AL.push_back(input);
	}
	
	/*
	for (int i = 0;i < r;i++) {
		for (int j = 0;j < c;j++) {
			cout << AL[i][j];
		}
		cout << endl;
	}*/
	
	for (int i = 0;i < r;i++) {
		for (int j = 0;j < c;j++) {
			
			if (AL[i][j] == 'v') {
				smiles++;
				faces++;
				DFS(i,j);
			}
		}
	}
	
	cout << faces << endl << smiles << endl;
	
	return 0;
}

