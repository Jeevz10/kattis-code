#include <bits/stdc++.h>
using namespace std;

class women {
	private:
		map<pair<int,int>, string> patients1;
		map<string,pair<int,int>> patients2;
		
	public:
		women() {
		}
		
		void ArriveAtHospital(string name,int order,int dilation) {
			patients2[name] = make_pair(dilation,order);
			patients1[make_pair(dilation,order)] = name;
		}
		
		void UpdateDilation(string name,int increase) {
			patients2[name].first += increase;
			
			patients1.erase(patients2[name]);
			patients1[make_pair(patients2[name].first,patients2[name].second)] = name;
			
		}
		void GiveBirth(string name) {
			patients1.erase(patients2[name]);
			patients2.erase(name);
		}
		
		string Query() { 
			return patients1.rbegin().second;
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
		else if (command == 1) {
			cin >> name >> increase;
			women.UpdateDilation(name,increase);
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
