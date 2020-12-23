#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	
	cin >> n;
	printf("%d\n", (n = ((1<<n) + 1)) * n);
//	cout << pow(pow(2,n)+1,2) << endl;
	return 0;
}
