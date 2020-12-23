#include <bits/stdc++.h>
using namespace std;

int main() {
  int king,queen,rooks,bishops,knights,prawns;
  
  cin >> king >> queen >> rooks >> bishops >> knights >> prawns;
  
  cout << 1 - king << ' ' << 1 - queen << ' ' << 2 - rooks << ' '<< 2 - bishops << ' ' << 2 - knights << ' ' << 8 - prawns;
  
  return 0;
}
