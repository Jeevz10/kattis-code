#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int n,sum = 0;
	
	cin >> n;
	
	for(int i = 0;i < n;i++) {
		string x,y;
		int a,u;
		
		cin >> x;
		
	
		y = x.back();
	
	//	stringstream geek(y);
	//	geek >> u;	
		u = stoi(y);
		
	//	cout << u << endl;
		
		x.pop_back();
		
	//	stringstream geek(x);
	//	geek >> a;
		a = stoi(x);
	//	cout << a << endl;
		
		sum += pow(a,u);
	//	cin >> x;
	//	y = x.back();
	
	/*
		len = x.length();
		
		a = x[len - 1];
		
		y = x.back();
		
 		cout << a - '0'<< endl;   // remember the ascii table
	*/
	//	z = atoi(y); // dont use atoi, doesnt work for c; use stoi 
	}
	
	cout << sum << endl;
	
	return 0;
}
