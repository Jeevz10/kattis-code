#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	
	cin >> tc;
	
	for (int i = 0; i < tc;i++) {
		
		int num;
		cin >> num;
		vector<int> log;
		int sum = 0,max = 0,status = 0,index = 1,index2 = 0;
		
		for (int j = 0;j < num;j++) {
			int a;
			
			cin >> a;
			
			sum += a;
			
			log.push_back(a);
			
			if (a == max) {
				status = 1;
			}
			if (a > max) {
				max = a;
				status = 0;
				index2 = index;
			}
			index++;
		}
		
		float decide = (float) max / sum;
		
		if (status == 1) {
			cout << "no winner\n";
		}
		else if (decide > 0.5) {
			cout << "majority winner " << index2 << endl;
		}
		else {
			cout << "minority winner " << index2 << endl;
		}
	}
	return 0;
}
