#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	set<int> data;
	
	cin >> n >> m;
	
	for (int i = 0;i < m;i++) {
		int a,b;
		
		cin >> a >> b;
		
		data.insert(a);
		data.insert(b);	
	}
	
	
	
	if (data.size() != n) {
		cout << "Impossible\n";
	}
	else {
		
		for (int i = 0;i < n;i++) {
			
			if (i % 2 == 0) {
				cout << "pub ";
			}
			else {
				cout << "house ";
			}
		}
		cout << endl;
	}
	
	return 0;
}

