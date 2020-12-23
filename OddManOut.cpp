#include <bits/stdc++.h>
using namespace std;

int main() {
  unordered_set<int> myset;
  unordered_set<int> duplicate;
  int tc,k = 1;
  
  cin >> tc;
  
  for (int i = 0;i < tc;i++) {
    int tcc;
    
    cin >> tcc;
    
    for (int j = 0;j < tcc;j++) {
      int num; 
      
      cin >> num;
      
      if (myset.find(num) == myset.end()) { // what this does is to see if thereisnt the partcular key
        myset.insert(num);
      }
      else {   // have duplicate
         myset.erase(num);
      }
      
    }

    unordered_set<int>::iterator itr;
    for (itr = myset.begin(); itr!= myset.end();itr++) {
    cout << "Case #" << k << ": " << (*itr) << endl;
    }
    k++;
    myset.clear();
  }
  
  
  return 0;
}
