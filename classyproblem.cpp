#include <bits/stdc++.h>
using namespace std;

int main () {
	int tc;
	
	cin >> tc;
	
	for (int i = 0; i < tc;i++) {
		int num;
		
		cin >> num;
		set<pair<string,string> >classy;  // rank name
		for (int j = 0; j < num;j++) {
			string namecol,input,waste;
			
			cin >> namecol >> input >> waste;
			
			namecol.pop_back(); //remove colon
			
			istringstream iss (input);
			string in;
			deque<char> mychar;
			string rank;
			while (getline(iss,in,'-')) {
				if (in == "upper") {
					mychar.push_front('A');
				}
				else if (in == "middle") {
					mychar.push_front('B');
				}
				else if (in == "lower") {
					mychar.push_front('C');
				}
			}
			
			int len = mychar.size();
			int status = 0;
			char ch;
			
			for (int k = 0;k < 10;k++) {   // always find clues in the question they give
				if (k < len) {
				
					rank.push_back(mychar.front());
					mychar.pop_front();
				}
				else if (k >= len) {
					rank.push_back('B');
				}
			}
			
			classy.insert(pair<string,string> (rank,namecol));
			
		}
		
		for (auto &it: classy) {
			cout << it.second << endl;
		}
		
		cout << "==============================\n";
	}
	
	return 0;
}
