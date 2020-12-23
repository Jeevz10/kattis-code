#include <bits/stdc++.h>
using namespace std;

int main() {
  string input;
  int len;
  
  cin >> input;
  
  len = input.length();
  
  int status = 0;
  
  for (int i = 0;i < len;i++) {
    if (input[i] == 's' && input[i+1] == 's') {
      status = 1;
      break;
    }
  }
  
  if (status == 0) {
    cout << "no hiss\n";
  }
  else {
    cout << "hiss\n";
  }
  
  return 0;
}
