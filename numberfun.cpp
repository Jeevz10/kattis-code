#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	
	cin >> tc;
	
	for (int i = 0;i < tc;i++) {
		int a,b,c,status = 0;
		
		cin >> a >> b >> c;
		
		if (c == a + b) {
			status = 1;
		}
		
		else if (c == a - b) {
			status = 1;
		}
		else if (c == b - a) {
			status = 1;
		}
		else if (c == a * b) {
			status = 1;
		}
		else if (c == a / b && a % b == 0) {
			status = 1;
		}
		else if (c == b / a && b % a == 0) {
			status = 1;
		}
		
		if (status == 1) {
			cout << "Possible\n";
		}
		else if (status == 0) {
			cout << "Impossible\n";
		}
	}
	
	return 0;
}
