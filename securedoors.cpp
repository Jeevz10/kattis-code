#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	
	cin >> tc;
	set<string> log;
	
	for (int i = 0; i < tc;i++) {
		string cmd,name;
		
		cin >> cmd >> name;
		
		if (cmd == "entry") {
			if (log.find(name) == log.end()) {
				log.insert(name);
				cout << name << ' ' << "entered\n";
			}
			else {
				cout << name << ' ' << "entered (ANOMALY)\n";
			}
		}
		else if (cmd == "exit") {
			if (log.find(name) != log.end()) {
				log.erase(name);
				cout << name << ' ' << "exited\n";
			}
			else {
				cout << name << ' ' << "exited (ANOMALY)\n";
			}
		}
	}
	
	return 0;
	
}
