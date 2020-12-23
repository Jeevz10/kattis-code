#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[200000],i,tc,x;
	long long discount = 0;
	
	cin >> tc;
	
	for(i = 0;i < tc;i++) {
		cin >> x;
		arr[i] = x;
	}
	
	vector<int> items(arr,arr+tc);
	
	sort(items.begin(),items.end());
	reverse(items.begin(),items.end());
	
	for (i = 2;i < tc;i += 3) {
		
		discount += items[i];
	}
	
/*	for (i = 0;i < tc;i++) {
		cout << items[i] << ' ';
	}
*/
	cout << discount << endl;
}
