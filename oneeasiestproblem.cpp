#include <bits/stdc++.h>
using namespace std;

int sumofDigits (int num) {
	int sum = 0;
	
	while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    
    return sum;
}

int main() {
	while (1) {
		int num,answ;
		
		cin >> num;
		
		if (num == 0) {
			break;
		}
		
		for (int i = 11;i < INT_MAX;i++) {
			int product,sump,sum;
			
			product = i * num;
			sum = sumofDigits(num);
			sump = sumofDigits(product);
			
			if (sum == sump) {
				answ = i;
				break;
			}
		}
		
		cout << answ << endl;
	}
	
	return 0;
}
