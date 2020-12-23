#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc,length = 0,i,num;
	list<int> data;
	
	cin >> tc;
	
	for (i = 0;i < tc;i++) {
		cin >> num;
		if (i == 0) {
			data.push_back(num);
			length++;
			continue;
		}
		
		if (num > data.back()) {
			data.push_back(num);
			length++;
		}
	}
	

	
	cout << length << endl;
	
	for (i = 0;i < length;i++) {
		cout << data.front() << ' ';
		data.pop_front();
	}
	
	cout << endl;
}
