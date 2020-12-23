#include <bits/stdc++.h>
using namespace std;

int main() {
  int len,r = 0,s = 0;
  string a,b;
  
  cin >> len >> a >> b;
  
  map<char,int> amap,bmap;
  
  for (int i = 0;i < len;i++) {
    if (a[i] == b[i]) {
      r++;
      continue;
    }
    
    if (amap.find(a[i]) != amap.end()) {
      amap[a[i]]++;
    }
    else {
      amap.insert(pair<char,int> (a[i], 1));
    }
    
    if (bmap.find(b[i]) != bmap.end()) {
      bmap[b[i]]++;
    }
    else {
      bmap.insert(pair<char,int> (b[i], 1));
    }
  }
  
  map<char,int>::iterator itr;
  
  for (itr = amap.begin(); itr != amap.end();itr++) {
    if (bmap.find(itr->first) != bmap.end()) {
     
  //  s += bmap[itr->first] + itr->second;
      if (bmap[itr->first] <= itr->second) {
        s += bmap[itr->first];
      }
      else {
        s += itr->second;
      }
    }
  }

  cout << r << ' ' << s << endl;
  
  return 0;
}
