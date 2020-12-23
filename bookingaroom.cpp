#include <bits/stdc++.h>
using namespace std;

class Hotel {
	private:
		vector <bool> booked;
	public:
		Hotel () {
		}
		Hotel (int r) {
			booked.assign(r,false);
		}
		
		void Book (int num) {
			booked[num-1] = true;
		}
		int GiveMeEmptyRoom () {
			int num = 0;
			
			for (num = 0;num < (int)booked.size();num++) {
				if (!booked[num]) { // or booked[num] == false 
					return num +1;
				}
			}
			return -1;
		}
};

int main () {
	int r,n;
	
	cin >> r >> n;
	Hotel MyHotel(r);
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    MyHotel.Book(num);
  }
  if (MyHotel.GiveMeEmptyRoom() == -1)
    cout << "too late\n";
  else
    cout << MyHotel.GiveMeEmptyRoom() << "\n";
  return 0;
}
