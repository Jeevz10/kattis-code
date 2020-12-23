#include <bits/stdc++.h>
using namespace std;

int main() {
	set<char> p,k,h,t;
	int out = 0;
	
	for (int i = 1; i < 14;i++) {
		p.insert('0'+ i);
		k.insert('0'+ i);
		h.insert('0' + i);
		t.insert('0' + i);
	}
	
	string input;
	char ch;
	int num;
	cin >> ch >> num;
	cout<< ch << num;
	int len = input.length(),status,status2;
	
	for (int i = 0;i < len;i += 3) {
		
		if (input[i] == 'P') {
			i++;
			if (input[i] == '0') {
				i++;
				if (p.find(input[i]) != p.end()) {
					p.erase(input[i]);
				}
				else {
					cout << "GRESKA\n";
					out = 1;
					break;					
				} 	
			}
			else if (input[i] == '1') {
				i++;
				string c = "1";
				c += input[i];
				
				if (p.find(input[i]) != p.end()) {
					p.erase(input[i]);
				}
				else {
					cout << "GRESKA\n";
					out = 1;
					break;
				}
			}
		}
		
		else if (input[i] == 'K') {
			i++;
			if (input[i] == '0') {
				i++;
				if (k.find(input[i]) != k.end()) {
					k.erase(input[i]);
				}
				else {
					cout << "GRESKA\n";
					out = 1;
					break;					
				} 	
			}
			else if (input[i] == '1') {
				i++;
				string c = "1";
				c += input[i];
				
				if (k.find(input[i]) != k.end()) {
					k.erase(input[i]);
				}
				else {
					cout << "GRESKA\n";
					out = 1;
					break;
				}
			}
		}
		
		else if (input[i] == 'H') {
			i++;
			if (input[i] == '0') {
				i++;
				if (h.find(input[i]) != h.end()) {
					h.erase(input[i]);
				}
				else {
					cout << "GRESKA\n";	
					out = 1;
					break;				
				} 	
			}
			else if (input[i] == '1') {
				i++;
				string c = "1";
				c += input[i];
				
				if (h.find(input[i]) != h.end()) {
					h.erase(input[i]);
				}
				else {
					cout << "GRESKA\n";
					out = 1;
					break;
				}
			}
		}
		
		else if (input[i] == 'T') {
			i++;
			if (input[i] == '0') {
				i++;
				if (t.find(input[i]) != t.end()) {
					t.erase(input[i]);
				}
				else {
					cout << "GRESKA\n";	
					out = 1;
					break;				
				} 	
			}
			else if (input[i] == '1') {
				i++;
				string c = "1";
				c += input[i];
				
				if (t.find(input[i]) != t.end()) {
					t.erase(input[i]);
				}
				else {
					cout << "GRESKA\n";
					out = 1;
					break;
				}
			}
		}
	}
	
	if (out == 0) {
		cout << p.size() << ' ' << k.size() << ' ' << h.size() << ' ' << t.size() << endl;
	}
	return 0;
}
/*
int main() {
	string input;
	char label,c1,c2;
	int num,p = 13,k = 13,h = 13,t = 13,status = 0;
	vector<char> pp,kk,hh,tt;
	
	
	
	while (cin >> label >> c1 >> c2)  {               // you cant input an integer coz cin will read in the entire thing as an integer  
		if (c1 == '0') {
			num = c2 - '0'; // this is much safer to do; try stoi (c2)
		}
		else if (c1 == '1') {
			num = (c1 - '0') * 10 + (c2 - '0');
		}
		if (label == 'P') {
			p--;
			
			if (p == 12) {
				pp.push_back(num);
				continue;
			}
			else if (binary_search(pp.begin(),pp.end(),num)) {
				status = 1;
				pp.push_back(num);
			}
		}
		
		else if (label == 'K') {
			k--;
			
			if (k == 12) {
				kk.push_back(num);
				continue;
			}
			else if (binary_search(kk.begin(),kk.end(),num)) {
				status = 1;
				kk.push_back(num);
			}
		}
		
		else if (label == 'H') {
			h--;
			
			if (h == 12) {
				hh.push_back(num);
				continue;
			}
			else if (binary_search(hh.begin(),hh.end(),num)) {
				status = 1;
				hh.push_back(num);
			}
		}
		else if (label == 'T') {
			t--;
			
			if (t == 12) {
				tt.push_back(num);
				continue;
			}
			else if (binary_search(tt.begin(),tt.end(),num)) {
				status = 1;
				tt.push_back(num);
			}
		}		
	}
	if (status == 1) {
		cout << "GRESKA\n";
	}
	else if (status == 0) {
		printf("%d %d %d %d\n",p,k,h,t);
	}
	return 0;
} */
