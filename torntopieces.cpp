#include <bits/stdc++.h>
using namespace std;
unordered_map<string,string> visited;
string src,dest;

void printpath(string v) {
	
	if (v == src) {
		return;
	}
	
	string f = visited[v];
	printpath(f);
	
	cout << visited[v] << ' ';
	
	
	
	
}

int main() {
//	freopen("torntopieces.in","r",stdin);
	int num;
	
	cin >> num;
	getchar();
	
	unordered_map<string,set<string> > AL;
	
	
	for (int i = 0;i < num;i++) {
		string input;
		getline(cin,input);
		
		istringstream iss (input);
		
		int count = 0;
		string in,str;
		
		while(getline(iss,in,' ')) {
		//	cout << in << ' ';
			if (count == 0) {
				str = in;
				count++;
			}
			else {
			//	cout << str << ' ' << in;
				AL[str].insert(in);
				AL[in].insert(str);
			}		
		}		
	}
	
	
	cin >> src >> dest;
	
	/*
	for (auto &itr : AL) {
		cout << itr.first << ' ';
		for (auto &it: itr.second) {
			cout << it << ' ';
		}
		cout << endl;
	} */
	
	
	queue<pair <string,string> > q;
	
	q.push(make_pair(src,src));
	visited[src] = src;
	string prev;
	bool status = false;
	
	while(!q.empty()) {
		
		pair<string,string> current = q.front();
		q.pop();
		
		string to,fro;
		
		to = current.first;
		fro = current.second;
				
		if (to != src) {
			visited[to] = fro;
		//	cout << "current: " << to << endl;
		//	cout << "previous: " << fro << endl;
		}
		
		if (to == dest) {
			status = true;
			break;
		}
		for (auto &itr: AL[to]) {
		//	cout << itr;
			if (visited.find(itr) == visited.end()) 
			{
			//	cout << itr << ' ';
				q.push(make_pair(itr,to));
			}
		}
//		cout << endl;
		
		prev = fro;
	}
	
	if (status == false) {
		cout << "no route found\n";
	}
	else {
		printpath(dest);
		cout << dest << endl;
	}
	
	
	return 0;
	
}

