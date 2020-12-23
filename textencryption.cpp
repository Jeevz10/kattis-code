#include <bits/stdc++.h>
using namespace std;

int main() {
  int num;
  
  while (cin >> num && num != 0) {
    getchar();
    string in,inn,input;
    
    getline(cin,in);
    istringstream iss(in);
    
    while (getline(iss,inn,' ')) {
      transform(inn.begin(),inn.end(),inn.begin(),::toupper);
      input += inn;
    }

    
    int len = input.length(),count = 0;
    int j = 0,start = 0;
    vector<char> output(len,0);  // must initialize !!! 
    
    for (int i = 0;count < len; i++) {
      if (j > len - 1) {
        start++;
        j = start;
      }
      output[j] = input[i];
    //  cout << output[j] << ' ';
       j += num;
      count++;
    }
  
    for (int k = 0;k < len;k++) {
      cout << output[k];
    }
    cout << endl;
  }
  
  return 0;
  
}
