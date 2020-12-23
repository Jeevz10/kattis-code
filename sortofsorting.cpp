#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,order = 1;
	string in,input;
	char ch1,ch2;
	
	while (cin >> n && n != 0) {
		map<pair<string,int>,string> data;
		for (int i = 0;i < n;i++) {
			cin >> in;
		
			input = in.substr(0,2);
			
			data[pair<string,int>(input,order)] = in;
		
			order++;
		}
		
		for (auto it = data.begin();it != data.end();it++) {
			cout << it->second << endl;
		}
		
		cout << endl;
	}
	
	
	return 0;
}
