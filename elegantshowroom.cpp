#include <bits/stdc++.h>
using namespace std;

int r, c,CC = 0,status = 0;
stack<pair<int,int> > ds;

void BFS(int i, int j, vector<string> &log) {
    
	if( i<0 || i==r || j<0 || j==c || log[i][j] == '#') {
		return ;
	}
	else if (log[i][j] == 'D' && i == r - 1 || i == 0 || j == c-1 || j == 0) {
		status = 1;
		return;
	}
	else if (log[i][j] == 'c' || log[i][j] == 'D') {
	  //  cout << i << ' ' << j << endl;
	    if (log[i][j] == 'c') {
	       CC++;
	    }
	    log[i][j] = '#';
		BFS(i, j+1,log);
    	BFS(i, j-1,log);
    	BFS(i+1, j,log);
    	BFS(i-1, j,log);
    }
}
    
    /*
void bfs(int s){
		data_structure.push(s);
		while( !data_structure.empty()){
			int temp = data_structure.top();	// if queue, use front(). if stack, use top()
			data_structure.pop();
			if( visited[temp]) continue;
			cout << "I am now checking node " << temp << endl;
			visited[temp]++;
			for( auto &it: AL[temp])
				data_structure.push(it);
		}
}
	*/
int main() {
	cin >> r >> c;
	
	vector<string>  log;
//	log.assign(r,string);  // no need
	
	string ch;
	
	for (int i = 0;i < r;i++) {
		cin >> ch;
		log.push_back(ch);
	}
	
	int a,b;
	
	cin >> a >> b;
	--a;
	--b;
	BFS(a,b,log);
	
	cout << CC << endl;
		
}

