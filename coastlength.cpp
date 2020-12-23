#include <bits/stdc++.h>
using namespace std;
#define MAX 1002


char arr[MAX][MAX];
int CC = 0;
int dx[] = {0, 0, -1, 1};  
int dy[] = {-1, 1, 0, 0};

void DFS(int x,int y,int r,int c) {
    
    arr[x][y] = '*';
    
    for (int k = 0;k < 4;k++) {
        int nx = x + dx[k];
        int ny = y + dy[k];
        
        if (nx < 0 || ny < 0 || nx >= r || ny >= c) {
            continue;
        }
        
        if (arr[nx][ny] == '1') {
            CC++;
        }
        
        if (arr[nx][ny] != '*' && arr[nx][ny] != '1') {
            DFS(nx,ny,r,c);
        }
    }
}

int main() {
	int r,c;
	cin >> r >> c;
	
	for (int i = 0; i < r; i++) {
		cin >> (arr[i+1]+1);
	} 
    
    for (int i = 0; i < r + 2; i++) { // fill the 0 column and last column with 0s
        arr[i][0] = '0';
        arr[i][c+1] = '0';
    }
    
    for (int j = 0; j < c + 2; j++) { // fill the 0 row and last 
        arr[0][j] = '0';
        arr[r+1][j] = '0';
    }
    
    /*
    for (int i = 0; i < r + 2; i++) {
        for (int j = 0; j < c + 2; j++) {
            printf("%c", arr[i][j]);
        }
        cout << endl;
    }*/
    DFS(0,0,r+2,c+2);
    
    cout << CC << endl;
    
    return 0;
    
}

