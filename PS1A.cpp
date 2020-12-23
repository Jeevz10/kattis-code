#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc,i = 0,j = 0,k,num,m1,m2,m3,n;
	unsigned long long median;
	
	cin >> tc;
	
	for (i = 0;i < tc;i++) {
		cin >> num;
		int arr[num];
		
		median = 0;
		
		for (j = 0;j < num;j++) {
				cin >> arr[j];
			if (j == 0) {
				median = arr[0];
				continue;
			}
			
			for (k = j;k >= 0;k--) {
				if (arr[k-1] > arr[k]) {
					swap(arr[k-1],arr[k]);
				}
			}
			
			if (j % 2 == 0) {
				m1 = (j/2);
				median += arr[m1];
			}
			
			if(j % 2 == 1) {
				m2 = (j/2);
				m3 = (j/2) + 1;
				median += ((arr[m2] + arr[m3]) / 2);
				
			}
			
		//	cout << median << endl;
		}
		
		for (n = 0;n < j;n++) {
			arr[n] = 0;
		}
		
		cout << median << endl;
	}
		
		
}
