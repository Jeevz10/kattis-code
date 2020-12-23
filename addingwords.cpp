#include <bits/stdc++.h>
using namespace std;

int main() {
	string cmd,input;
	map<string,int> log;
	
	while (cin >> cmd) {
		if (cmd == "def") {
			string var;
			int val;
			
			cin >> var >> val;
			
		//	cout << var << ' ' << val << endl;
			log[var] = val;
		}
		else if (cmd == "calc") {
			getchar();
			
			getline(cin,input);
			
			istringstream iss (input);
			int count = 0,status = 0,sum = 0;
			string in;
			deque<int> values;
			deque<string> operators;
		
			while (getline(iss,in,' ')) {
				
				if (count % 2 == 0) {
					if (log.find(in) == log.end()) {
						status = 1;
						break;
					}
					else {
						values.push_back(log[in]);
					}
				}
				else if (count % 2 == 1) {
					if (in == "=") {
						break;
					}
					else {
						operators.push_back(in);
					}
				}
				count++;
			}
			
			if (status == 1) {
				cout << input << ' ' << "unknown\n";
			}
			else {
				int i = 0;
				sum = values.front();
				values.pop_front();
				
				while ( !values.empty() && !operators.empty()) {
					if (operators.front() == "+") {
						sum += values.front();
						values.pop_front();
					}
					else if (operators.front() == "-") {
						sum -= values.front();
						values.pop_front();
					}
					
					operators.pop_front();
				}
				
			//	cout << sum << endl;
				
				string word;
				int status2 = 0;
				for (auto &it : log) {
					if (it.second == sum) {
						word = it.first;
						status2 = 1;
						break;
					}
				}
				
				if (status2 == 1) {
				    cout << input << ' ' << word << endl;
				}
				else {
				    cout << input << ' ' << "unknown\n";
				}
				
			}
		}
		else if (cmd == "clear") {
			log.clear();
		}
	}
	
	return 0;
}
