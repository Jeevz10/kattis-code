#include <bits/stdc++.h>
using namespace std;

int main () {
	stack<int> cards;
	int num,x,y,i = 0;
	cin >> num;
	
	for (i = 0;i < num;i++) {
		cin >> y;
		
		if (cards.empty()) {
			cards.push(y);
			continue;
		}
	//t sum = cards.top() + y;
	//cut << cards.top() << '+' << y << "==" << sum << endl;
		if ((cards.top() + y) % 2 == 0) {
			cards.pop();
		}
		else {
			cards.push(y);
		}
	}
	
	cout << cards.size() << endl;
}
