#include <bits/stdc++.h>
using namespace std;

class women {
	private:
		multimap<string,int> patients;
		vector<tuple<int,int,string>> dilations;
		
	public:
		women() {
		}
		
		void ArriveAtHospital(string name,int order,int dilation) {
			patients.insert(pair <string,int> (name,dilation));
			dilations.push_back(make_tuple(dilation,order,name));
		}
		
		void UpdateDilation(string name,int increase) {
			multimap<string,int>:: iterator itr = patients.find(name);
			int initial = (*itr).second;
			(*itr).second += increase;
			for (int i = 0;i < dilations.size();i++) {
				if (get<2>(dilations[i]) == name) {                        // if pair it is first and second
					get<0>(dilations[i]) += increase;
				}
			}		 
		}
		
		void GiveBirth(string name) {
			multimap<string,int>:: iterator itr = patients.find(name);
			patients.erase(itr);
			for (int i = 0;i< dilations.size();i++) {
				if (get<2>(dilations[i]) == name) {
					dilations.erase(dilations.begin() + i);
				}
			}
		}
		
		string Query() {
			make_heap(dilations.begin(),dilations.end());
			int constant = get<0>(dilations[0]),min_indx;

			for (int i = 0;i < dilations.size() - 1;i++) {
				int min_indx = i;
				int constant2 = get<1>(dilations[i]);
				for (int j = i+1;j< dilations.size();j++) {
					if (get<0>(dilations[j]) == constant) {
						if (get<1>(dilations[j]) < constant2) {
							constant2 = get<1>(dilations[j]);
							min_indx = j;
						}
					}
				}
				swap(dilations[min_indx],dilations[i]);
			}
						
			return get<2>(dilations[0]);
		}
		
};

int main() {
	int num_commands,command,num = 0,j = 1;
	
	cin >> num_commands;
	
	women women;  // for constructor, do not do write women women();
	
	for (int i = 0;i < num_commands;i++) {
		string name,her;
		int dilation,increase;
		cin >> command;
		
		if (command == 0) {
			cin >> name >> dilation;
			women.ArriveAtHospital(name,j,dilation);
			num++; 
			j++;
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
