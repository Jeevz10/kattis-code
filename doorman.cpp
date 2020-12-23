#include <bits/stdc++.h>
using namespace std;

int main() {
	int i,threshold,w = 0,m = 0,len;
	string input;
	
	cin >> threshold >> input;
	
	len = input.length();
	
	for(i = 0;i < len;i++ ) {
		if (input[i] == 'W') {
			w++;
		}
		else if (input[i] == 'M') {
			m++;
		}
		
		if (w - m > threshold) {
			break;
		}
	}
	
	cout << w + m << endl;
	return 0;
}
