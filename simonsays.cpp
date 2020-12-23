#include <bits/stdc++.h>
using namespace std;

int main() {
  int tc;
  
  cin >> tc;
  getchar();
  
  for (int i = 0;i < tc;i++) {
    string input,token;
    int j = 0;
    getline(cin,input);
    istringstream iss(input);
    
    while (getline(iss,token,' ')) {
      if (j == 0) {
        if (token != "simon") {
          cout << endl;
          break;
        }
      }
      
      if (j == 1) {
        if (token != "says") {
          cout << endl;
          break;
        }
      }
      j++;
      
      if (j > 2) {
        cout << token << ' ';
      }
      
    }
    
    cout << endl;
  }
  
  return 0;
}
