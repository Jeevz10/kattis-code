#include <bits/stdc++.h>
using namespace std;

int num;
unordered_map<string,vector<string> > AL;
unordered_map<string,bool> data;
stack<string> stk;
string change;

void addstack(string v) {
	
	for (auto &itr : AL) {
		for (auto &it: itr.second) {
			if (it == v) {
			//	cout << itr.first << endl;
				if (data[itr.first] == false) {
					addstack(itr.first);
				}
			}
		}
	}
	
	stk.push(v);
	data[v] = true;
				
} 


void toposort() {
	
	for (auto &it: AL) {
		for (auto &itr: it.second) {
			if (itr == change) {
			//	cout << it.first << endl;
				addstack(it.first);
			}
		}
	}
	
	while (!stk.empty()) {
		cout << stk.top() << endl;
		stk.pop();
	}
}
int main() {
	freopen("bd.in","r",stdin);
	
  // ios_base::sync_with_stdio(false); 
  // cin.tie(NULL);
	cin >> num;
	getchar();
	
	
	
	for (int i = 0;i < num;i++) {
		string input;
		
		getline(cin,input);
		istringstream iss (input);
		
		int ct = 0;
		string str,in;
		
		while(getline(iss,in,' ')) {
			
		//	cout << in << ' ';
			
			if (ct == 0) {
				int size = in.length();
				str = in.substr(0,size-1);
				data[str] = false;
				ct++;	
				continue;
			}
			ct++;
			AL[str].push_back(in);	
		}
	//	cout << endl;
	}

	/*
	for (auto &it: AL) {
		cout << it.first << ' ';
		for (auto &itr: it.second) {
			cout << itr << ' ';
		}
		cout << endl;
	}*/
	
	
	cin >> change; 
	cout << change << endl;
	toposort();
	
	
	
	return 0;
}

