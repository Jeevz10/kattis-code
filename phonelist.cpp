#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	// use pq see diff
	cin >> tc;
	
	for (int i = 0;i < tc;i++) {
		int num;
		
		cin >> num;
		vector<string> data;
		
		for (int j = 0;j < num;j++) {
			string in;
			
			cin >> in;
			
			data.push_back(in);
		}
		
		sort(data.begin(),data.end());
		/*
		for (auto it = data.begin();it != data.end();it++) {
			cout << *it << endl;
		}
		*/
		int status = 0;
		
		for (int j = 0;j < num - 1;j++) {
			int len;
			string first,next;
			
			first = data[j];
			next = data[j+1];
			len = data[j].length();
			
			if (!strncmp(first.c_str(),next.c_str(),len)) {
				cout << "NO\n";
				status = 1;
				break;
			}
			else {
				status = 3;
			}
			/*
			for (int k = 0;k < len;k++) {
				if (first[k] != next[k]) {
					status = 1;
					break;
				}
				
				if (k == len - 1 && status == 0) {
					status = 3;
				}
			}
			*/
			if (status == 3) {
				break;
			}
		}
		
		if (status == 3) {
			cout << "YES\n";
		}
	}
	
	return 0;
}
