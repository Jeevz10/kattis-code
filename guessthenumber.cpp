#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> vect;
	int random;
	
	for (int i = 1;i < 1000;i++) {
		vect.push_back(i);
	}
	
	int lower = 1;
	int upper = 1000;
	
//	random = rand() % upper + lower; it outputs a number lower .... lower+upper -1
	
	random = 500;
	
	cout << random << endl;
	
	for (int i = 0;i < 9;i++) {
		string cmd;
		
		cin >> cmd;
		
		if (cmd == "lower") {
			upper = random - 1;
			random = lower + (upper-lower)/2;
			
			cout << random << endl;
		}
		else if (cmd == "higher") {
			lower = random + 1;
			random = lower + (upper-lower)/2;
			
			cout << random << endl;
		}
		else if (cmd == "correct") {
			break;
		}
	}
	
	return 0;
}
