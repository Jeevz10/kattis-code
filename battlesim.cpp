#include <bits/stdc++.h> 
using namespace std;

int main() {
	string moves;
	vector<string> answer;
	
	cin >> moves;
	
	for (int i = 0;i < moves.length();i++) {
		if(moves[i] == 'R') {
			if (moves[i+1] == 'B') {
				if (moves[i+2] == 'L') {
					answer.push_back("C");
					i += 2;
				}
			}
			else if (moves[i+1] == 'L') {
				if (moves[i+2] == 'B') {
					answer.push_back("C");
					i++;
				}
			}
			else {
				answer.push_back("S");
			}
		}
		
		if(moves[i] == 'B') {
			if (moves[i+1] == 'R') {
				if (moves[i+2] == 'L') {
					answer.push_back("C");
					i++;
				}
			}
			else if(moves[i+1] == 'L') {
				if (moves[i+2] == 'R') {
					answer.push_back("C");
					i++;
				}
			}
			else {
				answer.push_back("K");
			}
		}
		
		if (moves[i] == 'L') {
			if (moves[i+1] == 'R') {
				if (moves[i+2] == 'B') {
					answer.push_back("C");
					i++;
				}
			}
			else if (moves[i+1] == 'B') {
				if (moves[i+2] == 'R') {
					answer.push_back("C");
					i++;
				}
			}
			else {
				answer.push_back("H");
			}
		}
	}
	for (int j = 0;j < answer.size();j++) {
		cout << answer[j];
	}
	cout << endl;
	
	return 0;
}
