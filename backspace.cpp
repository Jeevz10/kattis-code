#include <bits/stdc++.h>
using namespace std;

int main() {
	deque<char> line;
	int i,x,y;
	char ch;
	string input,str;
	while (1) {
		ch = getchar();
		
		if (ch == '\n') {
			break;
		}
		
		if (ch != '<') {
			line.push_back(ch);
		}
		else {
			line.pop_back();
		}
	}
	
	while (!line.empty()) {
		cout << line.front();
		line.pop_front();
	}
/*	
	cin >> input;
	istringstream iss(input);
	
	while (iss.get(ch)) {
		cout << ch << ' ';
		if (ch == '<') {
			q.pop();
		}
		else {
			q.push(ch);
		}
		
		for(i = 0;i < q.size();i++) {
			cout << q.top();
			q.pop();
		}
	}
	
	for (i = 0; i < q.size();i++) {
		cout << q.top();
		q.pop();
	}
*/	
	return 0;
}
