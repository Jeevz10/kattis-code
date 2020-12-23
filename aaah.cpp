#include <bits/stdc++.h>
using namespace std;

int main() {
	string john,input;
	
	cin >> john >> input;
	
	if (john.length() >= input.length()) {
		cout << "go\n";
	}
	else {
		cout << "no\n";
	}
	
	return 0;
}
