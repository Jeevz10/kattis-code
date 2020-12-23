#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<string> input2;
	string input;
	unordered_map<string,int> collate;
	int j = 0,status = 0;
	
	while (getline(cin,input) && input.compare("***") != 0) {
		
		if (collate.find(input) == collate.end()) {
			collate.insert(pair<string,int> (input,1));
		}
		else {
			collate[input] += 1;
		}
	}
	
	int max = 0;
	string fella;
	
	for (auto it = collate.begin();it != collate.end(); it++) {
		if (it == collate.begin()) {
			max = it->second;
			fella = it->first;
		}
		else if (it->second > max) {
			status = 0;
			max = it->second;
			fella = it->first;	
		}
		else if (it->second == max) {
			status = 1;
		}
	}
	
	if (status == 1) {
		cout << "Runoff!\n";
	}
	else {
		cout << fella << endl;
	}

	return 0;
}
