#include <bits/stdc++.h>
using namespace std;

int main() {
	long long h,j = 0,num,len;
	vector<long long> pq;
	string instructions;
	
	cin >> h;
	getline(cin,instructions);
	// for the ith node, Arr[i/2] returns the parent node. Arr[(2*i)+1] returns left child while Arr[(2*i)+2] returns right child 
	num = pow(2,h+1) - 1;
	
	if (instructions == "\n") {
		cout << num << endl;
		return 0;
	}
/*	for(long long i = num;i >= 0;i--) {
		pq.push_back(i);
	} NO NEED
*/ 	
	len = instructions.length();
	
///	cout << len << endl;
	
	for(long long i = 0;i < len;i++) {
		if (instructions[i] == 'L') {
			j = (2*j) + 1;
		}
		else if (instructions[i] == 'R') {
			j = (2*j) + 2;
		}
		
//		cout << j << endl;
	}
	cout << num - j << endl;
	
	return 0;
	
}
