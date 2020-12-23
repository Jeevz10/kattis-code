#include <bits/stdc++.h>
using namespace std;

int main() {
	map<string,int> firstrank;
	set<pair<string,string> > rank; //last first
	string first,last;
	int count = 0;
	
	while (cin >> first >> last) {  // read till eof
		
		if (firstrank.find(first) == firstrank.end()) {
			firstrank[first] = 1;
		}
		else {
			firstrank[first] += 1;
		}
		
		rank.insert(pair<string,string> (last,first));
	}
	
	for (auto it = rank.begin();it != rank.end(); it++) {
		if (firstrank[it->second] > 1) {
			cout << it->second << ' ' << it->first << endl;
		}
		else {
			cout << it->second << endl; 
		}
	}
	
	return 0;
	
}
