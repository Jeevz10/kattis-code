#include <bits/stdc++.h>
using namespace std;

int main() {
  string line;
  while(true) {
  	getline(cin,line); //input entire line
  	istringstream iss(line);	//create 'input stream' using the line
  	
  	if (line == "0 0") {
  		break;
	  }
  	long long x, sum = 0;
  	int y = 0;
  	while(iss >> x) {		//while i can input numbers 
  		sum += x;			//sum them
  		y++;
  		
  		if (y == 10) {
  			break;
		  }
  	}
  	cout << sum << endl;	//output
  }
  return 0;
}
