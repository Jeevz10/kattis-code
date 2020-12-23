#include <bits/stdc++.h>
using namespace std;

int main() {
  int tc;
  
  cin >> tc;
  getchar();
  
  for (int i = 0;i < tc;i++) {
    string input,token;
    int j = 0,status = 0;
    getline(cin,input);
    istringstream iss(input);
    
    while (getline(iss,token,' ')) {
      if (j == 0) {
        if (token != "Simon") {
          break;
        }
      }
      
      if (j == 1) {
        if (token != "says") {
          break;
        }
      }
      j++;
      
      if (j > 2) {
        cout << token << ' ';
        status = 1;
      }
    }
     
    if (status == 1) {
    	cout << endl;
	}

  }
  
  return 0;
}
