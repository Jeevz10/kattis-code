#include <bits/stdc++.h> 
using namespace std;

int main() {
	int n,c,i = 0;
	string o;

	
	cin >> n >> c;
	getline(cin,o); // to grab the '\n'
//	istringstream iss(o); Dont understand. The intent is to read in an entire line of words, till \n, then print it out. 
// istringstream is an object. what you need to do is get the line first, using cin or getline(iss/cin,..) -> then you convert it into an object called istringstream iss(o). 
	while (i != n) {
		
	getline(cin,o);
	// istringstream iss(o);
	i++;
	}
	cout << c << endl;

	
	return 0;
	
}
