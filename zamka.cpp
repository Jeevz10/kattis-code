#include <bits/stdc++.h>
using namespace std;

int sumint(int);

int main() {
	int low,high,sum,tempsum,i,min,max;
	
	cin >> low;
	cin >> high;
	cin >> sum;
	
	min = high;
	max = low;
	
	for (i=low;i<=high;i++) {
		tempsum = sumint(i);
		if (tempsum == sum) {
			if (i < min) {
				min = i;
			}
			
			if (i > max) {	
				max = i;
			}
		}
	}
	
	cout << min << endl;
	cout << max << endl;
	
	return 0;
}

int sumint(int num) {
	int sum = 0;
	
	while (num > 0) {
		sum += num % 10;
		num /= 10;
	}
	
	return sum;
}


