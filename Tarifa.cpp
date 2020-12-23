#include <bits/stdc++.h>
using namespace std;

int main() {
	int per_month,tc;
	
	cin >> per_month >> tc;
	
	int sum = 0;
	
	for (int i = 0;i < tc;i++) {
		int num;
		
		cin >> num;
		
		sum += per_month - num;
	}
	
	cout << sum + per_month << endl;
	
	return 0;
}
