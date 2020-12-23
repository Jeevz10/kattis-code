#include <bits/stdc++.h>
using namespace std;

int main() {
	int val;
	int num;
	set<int> data;
	
	for (int i = 0;i < 10;i++) {
		cin >> num;
		
		val = num % 42;
		
		data.insert(val);
	}
	
	cout << data.size() << endl;
	
	return 0;
}
