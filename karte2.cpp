#include <bits/stdc++.h>
using namespace std;

int main() {
	char ch;
	int num;
	set<int> p,k,h,t;
	int status = 0;
	
	for (int i = 1; i < 14;i++) {
		p.insert(i);
		k.insert(i);
		h.insert(i);
		t.insert(i);
	}
	
//	cout << p.size() << ' ' << k.size() << ' ' << h.size() << ' ' << t.size() << endl;
	while (cin >> ch >> num) {   // for unlimited inputs
	//	cout << ch << ' ' << num << endl;
		
		if (ch == 'P') {
			if (p.find(num) == p.end()) {
				status = 1;
				break;
			}
			else {
				p.erase(num);
			}
		}
		else if (ch == 'K') {
			if (k.find(num) == k.end()) {
				status = 1;
				break;
			}
			else {
				k.erase(num);
			}
		}
		else if (ch == 'H') {
			if (h.find(num) == h.end()) {
				status = 1;
				break;
			}
			else {
				h.erase(num);
			}
		}
		else if (ch == 'T') {
			if (t.find(num) == t.end()) {
				status = 1;
				break;
			}
			else {
				t.erase(num);
			}
		}
	}
	
	if (status == 1) {
		cout << "GRESKA\n";
	}
	else {
		cout << p.size() << ' ' << k.size() << ' ' << h.size() << ' ' << t.size() << endl;
	}
	
	//cout << p.size() << ' ' << k.size() << ' ' << h.size() << ' ' << t.size() << endl;
	return 0;
}
