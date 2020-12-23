#include <bits/stdc++.h>
using namespace std;

int main() {
	int num,w,h,max_l;
	
	cin >> num >> w >> h;
	max_l = sqrt(pow(w,2) + pow(h,2));
	for (int i = 0;i < num;i++) {
		int j;
		cin >> j;
		
		if (j <= max_l) {
			cout << "DA\n"; 
		}
		else {
			cout << "NE\n";
		}
	}
	return 0;
}
