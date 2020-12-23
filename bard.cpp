#include <bits/stdc++.h>
using namespace std;

int main() {
	int num_villagers,num_evenings;
	
	cin >> num_villagers >> num_evenings;
	
	int num,count = 1;
	map<int, set<int> >log;
	
	for (int i = 0;i < num_evenings;i++) {
		cin >> num;
		set<int> p;
		 
		for (int j = 0;j < num;j++) {
			int q;
			p.insert(q);	
		}
		
		if (p.find(1) != p.end()) {
			for (auto &it: p) {
				if (it == 1) {
					continue;
				}
				log[it].insert(count);
			}
			count++;
		}
		else {
			set<int> know;
			for (auto &it: p) {
				for (auto &itr: log[it]) {
					know.insert(itr);
				}
			}
			
			for (auto &it : log) {
				for (auto &itr : know) {
					log[itr].insert(itr);
				}
			}
		}
	} 
	
	for (auto &it : log) {
		if (it.second.size() == count) {
			cout << it.first << endl;
		}
	}
	
	return 0;
}
	
