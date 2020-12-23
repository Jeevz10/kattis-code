#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc,count = 0;
	
	cin >> tc;
	
	for (int i = 0;i < tc;i++) {
		int num;
		
		cin >> num;
		
		if (num < 0) {
			count++;
		}
	}
	
	cout << count << endl;
	
	return 0;
}
