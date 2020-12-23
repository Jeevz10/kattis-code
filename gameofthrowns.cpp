#include <bits/stdc++.h>
using namespace std;

int main() {
	int children,tc;
	
	cin >> children >> tc;
	
	getchar();
	
	string in,input;
	int count = 0,sum = 0,status = 0;
	stack<int> mystack;
	getline(cin,in);
	
	istringstream iss (in);
	
	while (getline(iss,input,' ')) {
		int num,num1,num2;
	//	cout << sum << endl;
		
		if ((isdigit(input[0]) || isdigit(input[1])) && status == 0) {
			num = stoi(input);
			
				num1 = num % children;
				sum += num1;
				if (sum < 0) {
					sum += children;
				}
				else if (sum > children - 1) {
				    sum -= children;
				}
				mystack.push(sum);
		}
		else if (input == "undo" && status == 0) {
			status = 1;
		}
		else if (status == 1) {
			num2 = stoi(input);
			for (int i = 0;i < num2;i++ ) {
				mystack.pop();
			}
			if (mystack.size() == 0) {
				sum = 0;
			}
			else {
				sum = mystack.top();
			}
			
			status = 0;		
		}	
	}
	
	cout << sum << endl;
	
	return 0;
}
