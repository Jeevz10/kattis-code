#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc,i,x,pu,po;
	
	while (1) {
		cin >> tc;
		
		if (tc == 0) {
			break;
		}
		
		int s_pq = 0;
		int s_s = 0;
		int s_q = 0;
		
		stack<int> a;
		queue<int> b;
		priority_queue<int> c;
		
		for (i = 0;i < tc;i++) {
			cin >> x;
			
			if (x == 1) {
				cin >> pu;
				a.push(pu);
				b.push(pu);
				c.push(pu);
			}
			
			else if (x == 2) {
				cin >> po;
				
				if (a.empty() || po != a.top()) {
					s_s = 1;
				}
				else {
					a.pop();
				}
				
				if (b.empty() || po != b.front()) {
					s_q = 1;
				}
				else {
					b.pop();
				}
				
				if (c.empty() || po != c.top()) {
					s_pq= 1;
				}
				else {
					c.pop();
				}
			
			}
		}
		
		if (s_q == 0 && s_pq == 0 && s_s == 0 ) {
			cout << "not sure" << endl;
		}
		
		else if (s_q == 0 && s_pq == 0 && s_s == 1) {
			cout << "not sure" << endl;
		}
		
		else if (s_q == 0 && s_pq == 1 && s_s == 0) {
			cout << "not sure" << endl;
		}
		
		else if (s_q == 1 && s_pq == 0 && s_s == 0) {
			cout << "not sure" << endl;
		}
		else if (s_q == 1 && s_pq== 1 && s_s == 1) {
			cout << "impossible" << endl;
		}
		
		else if (s_q == 0 && s_pq==1 && s_s == 1) {
			cout << "queue" << endl;
		}
		
		else if (s_q == 1 && s_pq==0 && s_s == 1) {
			cout << "priority queue" << endl;
		}
		
		else if (s_q == 1 && s_pq== 1 && s_s == 0) {
			cout << "stack" << endl;
		}
	}
	
	return 0;
}
