#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	long long i,j;
	
	cin >> tc; // cin.get() or scanf('[')
	
	
	
	for(i = 0;i < tc;i++) {
		string commands;
		cin >> commands;
		
		long long num;
		list<int> q;
		
		cin >> num;
		
		if (num == 0) {
			getchar();
			getchar();
			getchar();
			
			cout << "error\n";
			continue;
		}
		getchar();	
		getchar();
	//	scanf("[");	
	//	cin.get('[');
		
		for (j = 0;j < num;j++) {
			long long y;
			cin >> y;
			q.push_back(y);
			
			if (j == num - 1) {
			//	cin.get(']');
			//	scanf("]");
				getchar();
				break;
			}
		//	cin.get(',')
		//	scanf(",");
			getchar();
		}
		
/*		for (i = 0;i < num;i++) {
			cout << q.front() << ' ';
			q.pop_front();
		}
*/
		
		int len = commands.size();
		int status = 0;
		int count = 0;
		for(j = 0;j < len;j++) {
			
			if (commands[j] == 'R') {
				reverse(q.begin(),q.end());		
			}
			
			else if(commands[j] == 'D') {
				if (q.empty()) {
					status = 1;
					break;
				}
				q.pop_front();
				count++;
			}
		}
		
		if (status == 1) {
			cout << "error\n";
			continue;
		}
		
		num -= count;
		
		cout << '[';
		for(j = 0;j < num;j++) {
			int y;
			y = q.front();
			q.pop_front();
			if (j == num - 1) {
				cout << y << ']';
				break;
			}
			cout << y << ',';
		}
		cout << endl;
	}
	
	return 0;
}
