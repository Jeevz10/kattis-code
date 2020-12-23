#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
  	cin.tie(NULL);
  	cout.tie(NULL);
  	
  	set<string> male[26];
	set<string> female[26];
	int command;
  	
  	
	while (cin >> command && command != 0) {
		
		if (command == 1) {
			string name;
			int gender;
			int comp;
			
			cin >> name >> gender;
			
			comp = name[0]- 'A';
			cout << comp;
			
			if (gender == 1) {
				male[comp].insert(name);
			}
			else if (gender == 2) {
				female[comp].insert(name);
			}
		}
		
		else if (command == 2) {
			string name;
			int comp;
			cin >> name;
			
			comp = name[0] - 'A';
			
			if (female[comp].find(name) == female[comp].end()) {
				male[comp].erase(name);
			}
			else {
				female[comp].erase(name);
			}
		}
		
		else if (command == 3) {
			string Start,End;
			int gender;
			int count = 0;
			
			cin >> Start >> End >> gender;
			
			comp1 = Start[0] - 'A';
			comp2 = End[0] - 'Z';
			
			
			if (gender == 1) {
				auto it = male.lower_bound(Start);
				
				auto itr = male.lower_bound(End);
				
				for (auto itrr = it;itrr != itr;itrr++) {
					count++;
				}

			}
			else if (gender == 2) {
				auto it = female.lower_bound(Start);
	
				auto itr = female.lower_bound(End);
				
				for (auto itrr = it;itrr != itr;itrr++) {
					count++;
				}
			}
			
			else if (gender == 0) {
				auto it = male.lower_bound(Start);
				
				auto itr = male.lower_bound(End);
				
				for (auto itrr = it;itrr != itr;itrr++) {
					count++;
				}
				
				auto it2 = female.lower_bound(Start);
				
				auto it3 = female.lower_bound(End);
				
				for (auto itrrr = it2;itrrr != it3;itrrr++) {
					count++;
				}
			}
			cout << count << endl;
		}
	}
	
	return 0;
}
