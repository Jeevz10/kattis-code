#include <bits/stdc++.h>
using namespace std;

int main() {
	string input,token;
	cin >> input;
	istringstream iss(input);
	while (getline(iss,token,'-')) {
		cout << token[0];
	}
	
	cout << endl;
	
	return 0;	
	
	
}
