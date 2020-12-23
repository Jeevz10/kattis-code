#include <bits/stdc++.h>
using namespace std;

int main() {
	string a,b;
	
	cin >> a >> b;
	
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	
	if (a.compare(b) < 0) {
		cout << b << endl;
	}
	else {
		cout << a << endl;
	}
	
	return 0;
}
