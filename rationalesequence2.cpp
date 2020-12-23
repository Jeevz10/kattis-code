#include <bits/stdc++.h>
using namespace std;

int pq(int,int); 
int qp(int,int);

int main() {
	int tc;
	
	cin >> tc;
	
	for (int i = 0;i < tc;i++) {
		int ds,p,q,count = 0;
		
		cin >> ds >> p;
		getchar();
		cin >> q;
	//	cout << p << ' ' << q << endl;
		
		if (p > q) {
			count = 2* pq(p,q) + 3;
		}
		else if (q > p) {
			count = 2 * qp(p,q) + 2;
		}
		else if (p == 1 && q == 1) {
			count = 1;
		}
		
		cout << ds << ' ' << count << endl;
	}
	
	return 0;
}

int pq(int p,int q) {
	
	p -= q;
	
	if (p == 1 && q == 1) {
		return 0;
	}

	else if(p > q) {
		return 2*pq(p,q) + 2;
	}
	else if (q > p) {
		return 2*qp(p,q) + 1;
	}
	
}

int qp(int p,int q) {
	
	q -= p;
	
	if (p == 1 && q == 1) {
		return 0;
	}
	else if(p > q) {
		return 2*pq(p,q) + 2;
	}
	else if (q > p) {
		return 2*qp(p,q) + 1;
	}
	
}



/* steps for this ias such: you need to make sure use the test cases proivided, derive algebraic 
manipulation for the values. starting from the base value to the input valuue , determine how you want to
implement it,where you want to add in your counter*/
