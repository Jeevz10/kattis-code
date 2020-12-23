#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("fire.in","r",stdin);
	
	int dr[] = {0,0,1,-1};
	int dc[] = {1,-1,0,0};
	
	int n;
	
	cin >> n;
	
	for (int i = 0;i < n;i++) {
		
		int r,c;
		int pos_r,pos_c,fire_r,fire_c;
		
		cin >> c >> r;
		
	
		vector < string > AL;
		/* why wont this work?
		for (int j = 0;j < r;j++) {
			for (int k = 0;k < c;k++) {
				char ch;
				cin >> ch;
				cout << ch;
				AL[j][k].push_back(ch);
				
				if (ch == '@') {
					pos_r = j;
					pos_c = k;
				}
			}
		}
		*/
		
		for (int j = 0;j < r;j++) {
			string str;
			cin >> str;
			AL.push_back(str);
		}
		
		queue <tuple <char,int,int,int> > q;
		queue < tuple <char,int,int> > fire;
		
		for (int j = 0;j < r;j++) {
			for (int k = 0;k < c;k++) {
				if (AL[j][k] == '@') {
					pos_r = j;
					pos_c = k;
				}
				else if (AL[j][k] == '*') {
					fire_r = j;
					fire_c = k;
					
					fire.push(make_tuple(AL[fire_r][fire_c],fire_r,fire_c));
				}
			}
		}
		
		
		
		q.push(make_tuple(AL[pos_r][pos_c],pos_r,pos_c,0));
		
		int nr,nc,rr,cc,count,answ;
		char object;
		
		int fr,fc;
		int status = 0;
		
		
		while (!q.empty()) {
			object = get<0>(q.front());
			rr = get<1>(q.front());
			cc = get<2>(q.front());
			count = get<3>(q.front());
			count++;
			
			int size = fire.size();
			
			if (object == '.' && (rr == 0 || rr == r -1 || cc == 0 || cc == c - 1)) {
				answ = count;
				status = 1;
				break;
			}
			
			while (size) {
				fr = get<1>(fire.front());
				fc = get<2>(fire.front());
				
				if (AL[fr][fc] == '.') {
					AL[fr][fc] = '*';
				}
				else {
					continue;
				}
				
				for (int j = 0;j < 4;j++) {
					int frr = fr + dr[j];
					int fcc = fc + dc[j];
					
					if (frr < 0 || frr >= r || fcc < 0 || fcc >= c) {
						continue;
					}
					
					fire.push(make_tuple(AL[frr][fcc],frr,fcc));
				}
				size--;
			}
			
			if (object == '#' || '*') {
				continue;
			} 
			for (int j = 0;j < 4;j++) {
				nr = rr + dr[j];
				nc = cc + dr[j];
				
				if (nr < 0 || nr >= r || nc < 0 || nc >= c) {
					continue;
				}
				
				q.push(make_tuple(AL[nr][nc],nr,nc,count));
			}	
		}
		
		
		/*
		for (int j = 0;j < r;j++) {
			cout << AL[j] << endl;
		}
		*/
		
		if (status == 0) {
			cout << "IMPOSSIBLE\n";
		}
		else if (status == 1) {
			cout << answ;
		}
	}
	
	return 0;
}

