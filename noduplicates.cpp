#include <bits/stdc++.h>
using namespace std;

int main() {
	string in,input;
	set<string> myset;
	int status = 0;
	
	getline(cin,in);
	
	istringstream iss (in);
	
	while (getline(iss,input,' ')) {
		
		if (myset.find(input) == myset.end()) {
			myset.insert(input);
		}
		else {
			status = 1;
		}
	}
	
	if (status == 1) {
		cout << "no\n";
	}
	else {
		cout << "yes\n";
	}
	
	return 0;
}
