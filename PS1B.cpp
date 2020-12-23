#include <bits/stdc++.h>
using namespace std;

int main () {
	int tc,i = 0,j = 0,n,num_of_num,num,m1,m2,m3;
	unsigned long long median,temp;
	
	cin >> tc;
	
	for (i = 0;i < tc;i++) {
		cin >> num_of_num;
		vector<long long> hold;
		
		for (j = 0;j < num_of_num;j++) {
			cin >> num;
			
			vector<long long>::iterator k;
			k = upper_bound(hold.begin(),hold.end(),num);
				
			if (j == 0) {
				hold.push_back(num);
				median = num;
				continue;
			}
			
			if (j == 1) {
				if (num < hold[0]) {
					temp = hold[0];
					hold [0] = num;
					hold.push_back(temp);
					median += (temp + num) / 2;
					continue;
				}
				else { 
					hold.push_back(num);
					median += (hold[0] + num) / 2;
					continue;
			 	}
			}
			hold.insert(k,num);
			
			if (j % 2 == 0) {
				m1 = (j/2);
				median += hold[m1];
			}
			
			if(j % 2 == 1) {
				m2 = (j/2);
				m3 = (j/2) + 1;
				median += ((hold[m2] + hold[m3]) / 2);	
			}
			
		/*	for (n = 0;n < hold.size();n++) {
				cout << hold[n] << " ";
			}
			cout << endl;*/
		}
		cout << median << endl;
	}
	return 0;
}
