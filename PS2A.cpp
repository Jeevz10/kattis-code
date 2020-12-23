#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int x,i,pu,po,tc;
	
	while (1) {
		cin >> tc;
		
		if (tc == 0) {
			break;
		}
		int status = 0;
		stack<int> prob;
		for (i = 0;i < tc;i++) {
			cin >> x;
			
			if (x == 1) {
				cin >> pu;
				prob.push(pu);
			}
			
			else if (x == 2) {
				cin >> po;
				
				if (prob.empty() || po != prob.top()) {
					status = 1;
				}

				else {
					prob.pop();
				}
			}
		}
		
		if (status == 1) {
			cout << "impossible" << endl;
		}
		else {
			cout << "stack" << endl;
		}
	}
	
	return 0;
}
