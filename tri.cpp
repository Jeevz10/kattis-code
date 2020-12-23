#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y,z;
	
	cin >> x >> y >> z;
	
	if (z==x+y) {
		printf("%d+%d=%d\n",x,y,z);
	}
	else if (z==x*y) {
		printf("%d*%d=%d\n",x,y,z);
	}
	else if (z==x/y) {
		printf("%d/%d=%d\n",x,y,z);
	}
	else if(z==x-y) {
		printf("%d-%d=%d\n",x,y,z);
	}
	else if(x==y+z) {
		printf("%d=%d+%d\n",x,y,z);
	}
	else if(x==y-z) {
		printf("%d=%d-%d\n",x,y,z);
	}
	else if(x==y*z) {
		printf("%d=%d*%d\n",x,y,z);
	}
	else if(y==x*z) {
		printf("%d=%d/%d\n",x,y,z);
	}
	
	return 0;
}
