#include <bits/stdc++.h>
using namespace std;

int main() {
	int num,x,y = 1;
	
	while (1) {
		cin >> num;
		
		if (num == 0) {
			break;
		}
		int i = 0;
		queue<string> names;
		stack<string> other;
		
		while (1) {
			
			if (i == num) {
				break;
			}
			
			string fella;
			cin >> fella;
			if (i % 2 == 0) {
				names.push(fella);
			}
			else {
				other.push(fella);
			}
			
			i++;			
		}
		
		cout << "SET " << y << endl;
		y++;
		
		while (!names.empty()) {
			cout << names.front() << endl;
			names.pop();
		}
		
		while (!other.empty()) {
			cout << other.top() << endl;
			other.pop();
		}
			
	}
	
	return 0;
}
