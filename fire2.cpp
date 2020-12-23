#include <bits/stdc++.h>
using namespace std;

vector<string> AL;
queue<pair<int,int> > fireq;
int c,r;
int dr[] = {0,0,1,-1};
int dc[] = {1,-1,0,0};

void updatemap() {
	
	//for 1 second
	int size_fire = fireq.size();
	// cout << size_fire << endl;
	
	while (size_fire != 0) {
		
		pair<int,int> temp = fireq.front();
		fireq.pop();
		int fire_r = temp.first;
		int fire_c = temp.second;
		
	//	cout << fire_r << fire_c << endl;
		
		for (int i = 0;i < 4;i++) {
			int nr = dr[i] + fire_r;
			int nc = dc[i] + fire_c;
			
			if (nr < 0 || nr >= r || nc < 0 || nc >= c) {
				continue;
			}
			
			if (AL[nr][nc] == '.') {
	//			cout << nr << nc << endl;
				AL[nr][nc] = '*';
				fireq.push(make_pair(nr,nc));
			}
		}
		
		size_fire--;
	}
}

int main() {
	// freopen("fire.in","r",stdin);
	int num;
	
	cin >> num;
	
	for (int w = 0;w < num;w++) {
		
	
		
		cin >> c >> r;
		
	
		
		for (int i = 0;i < r;i++) {
			string str;
			cin >> str;
			AL.push_back(str);
		}
		
		/*
		for (int j = 0;j < r;j++) {
			cout << AL[j] << endl;
		}*/
		
		
		queue<pair<int,int> > positionq;
		// locate fire & starting pos
		
		for (int i = 0;i < r;i++) {
			for (int j = 0;j < c;j++) {
				if (AL[i][j] == '*') {
				//	cout << "fire: " << i << ' ' << j << endl;
					fireq.push(make_pair(i,j));			
				}
				else if (AL[i][j] == '@') {
					AL[i][j] = '0';
				//	cout << "pos: " << i << ' ' << j << endl;
					positionq.push(make_pair(i,j));
				}
			}
		}
		
		
		// every second you update the map with the fire 
		// function updatemap() 
		int current,stay,count = 0,answ_r,answ_c;
		bool status = false;
		
		while (!positionq.empty()) {
			
			pair<int,int> temp;
			temp = positionq.front();
			positionq.pop();
			int pos_r = temp.first;
			int pos_c = temp.second;
			
			current = AL[pos_r][pos_c] - '0';
			
			/*
			if (count == 1) {
				break;
			} */
			
			if (current == 0) {
				stay = 0;
			}
			
			if (stay != current) {
				updatemap();
				stay = current;
			}
			
			if (pos_r == r - 1 || pos_r == 0 || pos_c == c - 1 || pos_c == 0) {
				status = true;
				answ_r = pos_r;
				answ_c = pos_c;
				break;
			}
			for (int i = 0;i < 4;i++) {
				int nr = pos_r + dr[i];
				int nc = pos_c + dc[i];
				
				if (nr < 0 || nr >= r || nc < 0 || nc >= c) {
					continue;
			}
				if (AL[nr][nc] != '.') {
					continue;
				}
				
				AL[nr][nc] = AL[pos_r][pos_c] + 1;
				
				positionq.push(make_pair(nr,nc));
			}
			
		//	count++;
		}
		/*
		for (int j = 0;j < r;j++) {
			cout << AL[j] << endl;
		}
		*/
		
		if (status == true) {
			int t = (AL[answ_r][answ_c] - '0');
			cout << t + 1 << endl;
		}
		else {
			cout << "IMPOSSIBLE\n";
		}
		
		AL.clear();
		
		while (!fireq.empty()) {
			fireq.pop();
		}
		
	//	fireq.clear(); // change
		
		while (!positionq.empty()) {
			positionq.pop();
		}
	//	positionq.clear(); // change
		
	}
}

