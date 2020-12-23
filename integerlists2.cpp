#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	
	cin >> tc;
	
	for (int i = 0;i < tc;i ++) {
		string input;
		
		cin >> input;
		
		int num;
		
		cin >> num;
		
		if (num == 0) {
			getchar();
			getchar();
			getchar();
			cout << "error\n";
			continue;
		}
		
		deque<int> tell;
		getchar();
		getchar();
		
		for (int j = 0;j < num;j++) {
			int num2;
			
			if (j == num - 1) {
				cin >> num2;
				tell.push_back(num2);
				getchar();
				break;
			}
			cin >> num2;
			
			tell.push_back(num2);
			getchar();
			
			
		}
		
		int status = 1,len = input.length();
		
		for (int j = 0;j < len;j++) {
			
			
			if (input[j] == 'R') {
				status *= -1;
			}
			
			if (input[j] == 'D') {
				if (tell.empty()) {
				status = 2;
				break;
				}
				if (status == 1) {
					tell.pop_front();
				}
				else if (status == -1) {
					tell.pop_back();
				}
			}
		}
		
		int final_len = tell.size();
		
		if (status == 2) {
			cout << "error\n";
			continue;
		}
		if (status == -1) {
			reverse(tell.begin(),tell.end());
		}
		cout << "[";
		for (int j = 0;j < final_len;j++) {
			if (j == final_len - 1) {
				cout << tell[j] << "]\n";
				break;
			}cout << tell[j] << ",";
			
			
		}
	}
	
	return 0;
}
