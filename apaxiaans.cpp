#include <bits/stdc++.h>
using namespace std;

int main() {
	string input;
	char prev,current;
	int len;
	deque<char> output;
	cin >> input;
	
	len = input.length();
	
	for (int i = 0;i < len;i++) {
		if (i == 0) {
			output.push_back(input[i]);
			prev = input[i];
			continue;
		}
		
		current = input[i];
		
		if (current == prev) {
			continue;
		}
		
		else {
			output.push_back(current);
			prev = input[i];
		}
	}
	// cout << output.size() << endl;
	/*for (int i = 0; i <= output.size();i++) {
		cout << output.front();
		output.pop_front();
		Dont do this as the size will change. 
	} */ 
	
	for (int i = 0; i < output.size();i++) {
		cout << output[i];
	}
	
	cout << endl; 
	
	return 0;
}
