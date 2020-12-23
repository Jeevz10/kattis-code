#include <bits/stdc++.h>
using namespace std;

#define INF INT_MAX

typedef pair<int,int> ii;


int main() {
	freopen("blockcrusher.in","r",stdin);
	int r,c;
	
	int dr[] = {0,0,-1,-1,1,1,1,-1};
	int dc[] = {1,-1,1,-1,-1,1,0,0};
	
	while (cin >> r >> c && (r || c)) {
		
		vector< string > temp;
		int AL[21][61];
		
		for (int i = 0;i < r;i++) {
			string str;
			cin >> str;
			temp.push_back(str);
		}
		
		for (int i = 0;i < r;i++) {
			for (int j = 0;j < c;j++) {
				AL[i][j] = temp[i][j] - '0';	
			}
		}
		
		for (int i = 0;i < c;i++) {
			
			priority_queue<ii, vector<ii>, greater<ii> > pq;
			int distance[21][61] = {INF};
			
			pq.push(make_pair(0,i));
			
			while (!pq.empty()) {
				
				pair<int,int> temp;
				
				temp = pq.top();
				
				int current_r = temp.first;
				int current_c = temp.second;
				
				
				
			}
		}
		
		/*
		for (int i = 0;i < r;i++) {
			for (int j = 0;j < c;j++) {
				cout << AL[i][j] ;
			}
			cout << endl;
		} */
		
				
		
	}
	
	return 0;
}

/*
vector<vector<int>> dist;

    dist.resize(n, vector<int>(m, inf));
    */
/*
for (int i = 0;i < r;i++) {
			for (int j = 0;j < c;j++) {
				cout << AL[i][j];	
			}
			cout << endl;
		}*/
/*
vector< vector<int> > matrix;
for (int i = 0;i < r;i++) {
			vector<int> row;
			
			for (int j = 0;j < c;j++) {
				int val;
				cin >> val;
				row.push_back(val);
			}
			matrix.push_back(row);
		}
		
		*/
/*

int AL[21][61] = {0};
		
		for (int i = 0;i < r;i++) {
			for (int j = 0;j < c;j++) {
				int num;
				cin >> num;
				AL[i][j] = num;
			}
		}
		
		for (int i = 0;i < r;i++) {
			for (int j = 0;j < c;j++) {
				
				cout << AL[i][j];
			}
			cout << endl;
		}
		
		*/
/*

vector< string > AL;
		
		for (int i = 0;i < r;i++) {
			string str;
			cin >> str;
			AL.push_back(str);
		}
*/
/*
for (int i = 0;i < r;i++) {
			cout << AL[i] << endl;
		}
*/
/*
int arr[21][61] = {0};
		
		for (int i = 0;i < r;i++) {
			for (int j = 0;j < c;j++) {
				cin >> arr[i][j];
			}
		}
		
		for (int i = 0;i < r;i++) {
			for (int j = 0;j < c;j++) {
				cout << arr[i][j];
			}
			cout << endl;
		}*/
