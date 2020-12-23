#include <bits/stdc++.h>
using namespace std;

int main() {
	
	
	string str;
	int i;
	char ch;
	
	while (1) {
		ch = getchar();
		
		cout << ch << ' ';
		
		if (ch == '\n') {
			break;
		}
	}
/*	vector<int>::iterator low;
	int myarr[5] = {3,4,5,6,7};
	int myarr2[5] = {10,11,12,13,14};
	vector<int> tella(myarr,myarr+5);
	
	low = lower_bound(tella.begin(),tella.end(),5); // find
	
	cout << *low << endl;
	cout << low - tella.begin() << endl;
	cout << myarr2[low - tella.begin()] << endl;

/*	string input,str;
	
	int i;
	
	for (i = 0;i < 4;i++) {
		cin >> input;
		istringstream iss(input);
		
		while(getline(iss,str)) {
			cout << str << ' ';
		}
		cout << endl;
 	} */	
	return 0;
	
}
