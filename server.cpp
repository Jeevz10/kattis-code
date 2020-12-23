#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc,time,i,tasks = 0,num,sum;
	vector<int> data;
	
	cin >> tc >> time;
	
	for (i = 0;i < tc;i++) {
		cin >> num;
		if (num <= time && i == 0) {
			sum = num;
			tasks++;
			continue;
		}
		
		if ( sum + num <= time ) {
			sum += num;
			tasks++;
		}
		else {
			break;
		}
	}
	
	cout << tasks;
	
}
