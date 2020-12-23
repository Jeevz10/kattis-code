#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	
	cin >> tc;
	
	for (int i = 0;i < tc;i++) {
		string input;
		
		cin >> input;
		
		if (isalpha(input[0])) {
			cout << "skipped\n";
		}
		else {
			istringstream iss(input);
			string c,a,b;
			int count = 0;
			
			while (getline(iss,c,'+')) {
				if (count == 0) {
					a = c;
				}
				else {
					b = c;
				}
				
				count++;	
			}
			
			int aint,bint;
			
			aint = stoi(a);
			bint = stoi(b);
			
			cout << aint + bint << endl;
		}
	}
	
	return 0;
}
