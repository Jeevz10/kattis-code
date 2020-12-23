#include <bits/stdc++.h>
using namespace std;

int main() {
	int size,num,capacity = 0,status = 0;
	
	cin >> size >> num;
	
	for (int i = 0;i < num;i++) {
		int left,enter,stay;
		
		cin >> left >> enter >> stay; // inital scenario is when there is 0 on board
		
		capacity -= left;
		capacity += enter;
		
		if (i == num - 1 && capacity != 0) {
			status = 1;
		}
		
		if (i == num - 1 && stay != 0) {
			status = 1;
		}
		
		if (capacity < 0) {
			status = 1;
		}
		else if (capacity < size && stay > 0) {
			status = 1;
		}
		else if (capacity > size) {
			status = 1;
		}
		
	}
	
	if (status == 1) {
		cout << "impossible\n";
	}
	else if (status == 0) {
		cout << "possible\n";
	}
	
	return 0;
}
