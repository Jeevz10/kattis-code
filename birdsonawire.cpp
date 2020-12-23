#include <bits/stdc++.h>
using namespace std;

int main() {
	long long l,i,j,x,d,b,count = 0;
	int y,dist;
	cin >> l;
	cin >> d;
	cin >> b;
	
	if (b == 0) {
		for (i = 6;i <= l - 6;i += d) {
			count++;
		}
	}
	else  {
		int arr[20000];
		for (i = 0;i < b;i++) {
			cin >> x;
			arr[i] = x;
		}
		vector<int> birds(arr,arr+b);
		sort(birds.begin(),birds.end());
		
	/*	for (i = 0; i < b;i++) {
			cout << birds[i] << ' ';
		}
	*/	
		y = birds[0] - 6;
		dist = y / d;
		if (dist >= 1) {
			count = dist;
		}
		y = (l - 6) - birds[birds.size() - 1];
		dist = y / d;
		if (dist >= 2) {
			count += dist;
		}
		
		for (i = 0;i < birds.size() - 1;i++) {
			y = arr[i+1] - arr[i];
			dist = y / d;
			
			if (dist >= 1) {
				count += dist;
			}
		}
	}

	
	cout << count << endl;
	
	return 0;
}
