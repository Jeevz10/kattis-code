#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
  	cin.tie(NULL);
  	cout.tie(NULL);
  	
  	set<string> male;
	set<string> female;
	int command;
  	
  	
	while (cin >> command && command != 0) {
		
		if (command == 1) {
			string name;
			int gender;
			
			cin >> name >> gender;
			
			if (gender == 1) {
				male.insert(name);
			}
			else if (gender == 2) {
				female.insert(name);
			}
		}
		
		else if (command == 2) {
			string name;
			
			cin >> name;
			
			if (female.find(name) == female.end()) {
				male.erase(name);
			}
			else {
				female.erase(name);
			}
		}
		
		else if (command == 3) {
			string Start,End;
			int gender;
			int count = 0;
			
			cin >> Start >> End >> gender;
			
			if (gender == 1) {
				auto it = male.lower_bound(Start);
				
				auto itr = male.lower_bound(End);
				
				count = distance(it,itr);

			}
			else if (gender == 2) {
				auto it = female.lower_bound(Start);
	
				auto itr = female.lower_bound(End);
				
				count = distance(it,itr);
			}
			
			else if (gender == 0) {
				auto it = male.lower_bound(Start);
				
				auto itr = male.lower_bound(End);
				
				count = distance(it,itr);
				
				auto it2 = female.lower_bound(Start);
				
				auto it3 = female.lower_bound(End);
				
				count += distance(it2,it3);
			}
			cout << count << endl;
		}
	}
	
	return 0;
}
