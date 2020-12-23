#include <bits/stdc++.h>
using namespace std;

int main() {
	map<string,set<string> > namelog;
	map<string,int> wordlog;
	set<string> names;
	
	int tc;
	
	cin >> tc;
	getchar();
	for (int i = 0; i < tc;i++) {
		string in;
		
		getline(cin,in);
		
		istringstream iss(in);
		string input,name;
		int count = 0;
		
		while (getline(iss,input,' ')) {
			
			if (count == 0) {
				name = input;
				names.insert(name);
			}
			else{
				namelog[input].insert(name);
				if (wordlog.find(input) == wordlog.end()) {
					wordlog[input] = -1;
				}
				else {
					wordlog[input] -= 1;
				}
			}
			
			count++;
		}
	} 
	
	int size = names.size();
	
	set<pair <int,string> > numwords;
	
	for (auto it = namelog.begin();it != namelog.end();it++) {
		if (it->second.size() == size) {
			int a = wordlog[it->first];
			numwords.insert(pair<int,string> (a,it->first));
		}
	}
	
	if (numwords.size() == 0) {
		cout << "ALL CLEAR\n";
	}
	else {
		for (auto it = numwords.begin();it != numwords.end();it++) {
			cout << (it->second) << endl;
		}
	}
	
	return 0;
	
	
}
