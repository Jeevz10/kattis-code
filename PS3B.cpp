#include <bits/stdc++.h>
using namespace std;

class women {
	private:
		multimap<int,int,string> patients;
		
	public:
		women() {
		}
		
		void ArriveAtHospital(string name,int order,int dilation) {
			patients.insert(make_tuple(dilation,order,name));
		}
		
		void UpdateDilation(string name,int increase) {
			multimap<int,int,string>::iterator itr = patients.find(name);
			(*itr).first += increase;
		}
		void GiveBirth(string name) {
			multimap<int,int,string>::iterator itr = patients.find(name);
			patients.erase(itr);
		}
		
		string Query() { 
			multimap<int,int,string>::iterator itr = patients.begin();
			return (*itr).third;
		}
		
};

int main() {
	ios_base::sync_with_stdio(false);
	long long num_commands,command,num = 0,j = -1;
	
	cin >> num_commands;
	
	women women;  // for constructor, do not do write women women();
	
	for (long long i = 0;i < num_commands;i++) {
		string name,her;
		int dilation,increase;
		cin >> command;
		
		if (command == 0) {
			cin >> name >> dilation;
			women.ArriveAtHospital(name,j,dilation);   //PRIORITY QUEUE sorts the highest only. so if your order was -1 from the start, then it will decrease to -099999 so its sorted in that way
			num++; 
			j--;
		}
		else if (command == 2) {
			cin >> name;
			women.GiveBirth(name);
			num--;
		}
		else if (command == 3) {
			
			if (num == 0) {
				cout << "The delivery suite is empty\n";
				continue;
			}
			her = women.Query();
			cout << her << endl;
		}
	}
	return 0;
}
