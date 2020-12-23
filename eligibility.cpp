#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc,i,courses;
	char ha;
	string name,edu,dob,subedu,subdob;
	
	cin >> tc;
	
	for (i = 0;i < tc;i++) {
		getline(cin,name,' ');
		getline(cin,edu,' ');
		getline(cin,dob,' ');
		cin >> courses;
	//	getline(cin, ha) dont i have to grab the \n? how come i dont have to? 
		cout << name << ' ';
		subedu = edu.substr(0,4);
		subdob = dob.substr(0,4);
		
	//	istringstream iss(subedu);
		
		if (courses >= 41 && subedu < "2010" && subdob < "1991") {
			cout << "ineligible" << endl;
		}
		
		
		else if (subedu < "2010" && subdob < "1991" && courses < 41) {   // i have to ask, what i just did here was to convert the string into objects with numerical values right? 
			cout << "coach petitions" << endl;
		}
		
		else {
			cout << "eligible" << endl;
		}
		
	/*	cout << name << endl;
		cout << edu << endl;
		cout << dob << endl;
		cout << courses << endl; */
	}
	
	return 0;
}
