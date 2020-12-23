#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	set<string> all;
	
	cin >> tc;
	
	for (int i = 0;i < tc; i++) {
		int num;
		cin >> num;
		string str;
		
		for (int j = 0; j < num; j++) {
			
			
			cin >> str;
			
			all.insert(str);
		}
		
		cout << all.size() << endl;
		all.clear();
	}
	
	return 0;
}


/*
for (int i = 0;i < tc;i++) {
		int num,count = 0;
		
		cin >> num;
		
		for (int j = 0;j < num;j++) {
			vector<string> a,b;
			string str;
			cin >> str;
			int status = 0;
			
			if (j == 0) {
				a.push_back(str);
				b.push_back(str);
				count++;
				continue;
			}
			
			else {
				 for (int k = 0;k < b.size();k++) {
				 	if (b[i] == str) {
				 		status = 1;
				 		break;
					 }
				 }
				 
				 if (status == 1) {
				 	continue;
				 }
				 else {
				 	a.push_back(str);
				 	b.push_back(str);
				 	count++;
				 }
			}
		}
		cout << count << endl;
	}
	*/
