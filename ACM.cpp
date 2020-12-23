#include <bits/stdc++.h> 
using namespace std;

class team {
	private:
		vector<int> minutes;
		vector<char> problem;
		vector<string> correct;
	public:
		team () {
		}
		void insert_team (int x,char y,string z) {
			minutes.push_back(x);
			problem.push_back(y);
			correct.push_back(z);
			
			/* for (int i = 0;i< minutes.size();i++) {
				cout << minutes[i] << ' ';
			}
			cout << endl;
			for (int i = 0;i < problem.size();i++) {
				cout << problem[i] << ' ';
			}
			cout << endl;
			for (int i = 0;i < correct.size();i++) {
				cout << correct[i] << ' ';
			}
			cout << endl;
			*/
		}
		
		int check_team(int x,char y) {
			int tt = x;
			for(int i = 0;i < problem.size();i++) {
				if (problem[i] == y && correct[i] == "wrong") {
					tt += 20;
				}
			}
			return tt;
		}
		
		
}; 

int main() {
	team My_team;
	int i,min,tt = 0,probsolv = 0;
	char prob;
	string corr;
	vector<char> solved;
	
	while(1) {
		cin >> min;
		if (min == -1) {
			break;
		}
		cin >> prob >> corr;
		My_team.insert_team(min,prob,corr);
		
		if (corr == "right") {
			for (i = 0;i < solved.size();i++) {
				if (solved[i] == prob) {
					continue;
				}
			}
			solved.push_back(prob);
			
			++probsolv;
			tt += My_team.check_team(min,prob);
		}
	}
	
	cout << probsolv << ' ' << tt << endl;
	
	return 0;
	
}
