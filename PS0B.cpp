#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned long long a,b;
	
	while (true) {
		scanf("%llu %llu",&a,&b);
		
		if (a == 0 && b == 0) {
			break;
		}
		
		printf("%llu\n",a+b);
	}
	return 0;
}
