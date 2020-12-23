#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	map<string,vector<int> > ctylog;
	cin >> n;
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	for (int i = 0;i < n;i++) {
		string country;
		int year;
		
		cin >> country >> year;
		
		ctylog[country].push_back(year);
	}
	
	for (auto it = ctylog.begin();it != ctylog.end();it++) {
		sort(it->second.begin(),it->second.end());
	}
	
	int q;
	
	cin >> q;
	
	for (int i = 0;i < q;i++) {
		string country;
		int rank;
		
		cin >> country >> rank;
		
		int count = 0;
		
		cout << ctylog[country].at(rank - 1) << endl;
		/*
		for (auto it = ctylog[country].begin();it != ctylog[country].end();it++ ) {
			count++;
			
			if (count == rank) {
				cout << *it << endl;
			}
		}*/
	}
	
	return 0;
}
