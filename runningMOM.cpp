#include <bits/stdc++.h>
using namespace std;

// running MOM
unordered_map<string,vector<string> > AL;
unordered_map<string,int> visited;
bool back_edge_found; 


void dfs(string city) {
	visited[city] = 1; // 1 means explored, 0 is unvisited, 2 is visited
	
	for (auto &a: AL[city]) {
		
		if (visited[a] == 0) {
			dfs(a);
		}
		else if (visited[a] == 1) {
			back_edge_found = true;
		}	
	}
	
	visited[city] = 2;
}
int main() {
	
//	freopen("runningMOM.in","r",stdin);
	int tc;
	
	cin >> tc;
	
	for (int i = 0;i < tc;i++) {
		string fro,to;
		
		cin >> fro >> to;
		
		AL[fro].push_back(to);
	}
	
	string input;
	
	while (cin >> input) {
	//	cout << input << endl;
		back_edge_found = false;
		
		for (auto &city: AL) {
			visited[city.first] = 0;
		}
		
		dfs(input);
		
		cout << input << ' ';
		
		if (back_edge_found == true) {
			cout << "safe\n";
		}
		else {
			cout << "trapped\n";
		}
	}
	
	return 0;
	
	
}

