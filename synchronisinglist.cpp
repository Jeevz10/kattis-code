#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc,i,j;
	
	while (1) {
		cin >> tc;
		
		if (tc == 0) {
			break;
		}
		
		int first[5000],second[5000];
		int num;
		
		for (i = 0;i < tc;i++) {
			cin >> num;
			first[i] = num;
		}
		
		for (i = 0;i < tc;i++) {
			cin >> num;
			second[i] = num;
		}
		
		vector<int> v_f (first,first+tc);
		vector<int> v_s (second,second+tc);
		
		sort(v_f.begin(),v_f.end());
		sort(v_s.begin(),v_s.end());
		
/*		for (i = 0;i < tc;i++) {
			cout << v_f[i] << ' ';
		}
		cout << endl;
		
		for (i = 0;i < tc;i++) {
			cout << v_s[i] << ' ';
		}
		cout << endl;
*/		
		vector<int>::iterator p;
		
		for (i = 0;i < tc;i++) {
			p = find(v_f.begin(),v_f.end(),first[i]);
			cout << v_s[p - v_f.begin()]<< endl;
		}
		
		cout << endl;		
	}
	
	return 0;
}

