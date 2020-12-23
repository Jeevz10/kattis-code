#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc,sum,odd,even;
	
	cin >> tc;
	
	for (int i = 0; i < tc;i++) {
		int k,n;
		
		cin >> k >> n;
		
		sum = ((n * (n+1))/2);
		odd = pow(n,2);
		even = (n * (n + 1));
		cout << k << ' ' << sum << ' ' << odd << ' ' << even << endl;
	}
	
	return 0;
}
