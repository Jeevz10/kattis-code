#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y;
	
	cin >> x >> y;

	while (1) {
		
		if (x == 0 && y ==0) {
			break;
		}
		if (x + y == 13) {
			cout << "Never speak again.\n";
			
			cin >> x >> y;
			continue;
		}
		else if (y > x) {
			cout << "Left beehind.\n";
		}
		
		else if (x > y) {
			cout << "To the convention.\n";
		}
		
		else if (x == y) {
			cout << "Undecided.\n";
		}
		
		cin >> x >> y;
		
	}
	
	return 0;
}
