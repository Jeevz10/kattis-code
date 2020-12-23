#include <bits/stdc++.h>
using namespace std;

class babies {
	private: 
	
		map<string,int> mybabies;
	
	public:
		
		babies () {
		}
		
		void AddSuggestion(string babyName,int genderSuitability) {
			mybabies[babyName] = genderSuitability;
		}
		
		void RemoveSuggestion(string babyName) {
			mybabies.erase(babyName);
		}
		
		int Query(string Start,string End,int gender) {
			
			int num = 0,count = 0;
			map<string,int>::iterator first,temp,last,itr,itrr;
			
			first = mybabies.lower_bound(Start);
			if (first == mybabies.end()) {
				return 0;
			}
			/*
			prev(mybabies.end(),2);
			*/
			temp = mybabies.lower_bound(End);
			
			if (temp == mybabies.end()) {
				last = mybabies.end()--;
			}
			else {
				last = temp;
			}
			
			/*
			for (auto it = mybabies.begin(); it != mybabies.end(); it++) {
				if ( (it->first).compare(Start) >= 0) {      // Finding starting key that is larger than start prefix
					first = it;
					count++;
					break;
				}
			}
			
			if (count == 0) {    // If all keys are smaller than given key 
				return 0;
			}
			
			for (auto it = prev(mybabies.end(),1); it != mybabies.begin(); prev(it,1)) { 	// There isnt a it--
				if ( (it->first).compare(End) <= 0) {        // Finding last key that is smaller than end prefix
					last = it;
					count++;
					break;
				}
			}
			
			if (count == 1) {
				last = mybabies.end(); 		// ALl keys are smaller than end prefix 
			}			
			*/
			if (gender == 0) {
				itr = first;
				while (1) {
					
					
					if (itr->second == 1 || itr->second == 2) {
					//	cout << itr->first << endl;
						num++;
					}
					if (itr == last) {
						break;
					}
					itr++;
					
					
				}
			}
			else if (gender == 1) {
				itrr = first;
				while (1) {
					if (itrr->second == 1) {
					//	cout << itrr->first << endl;
						num++;
					}
					if (itrr == last) {
						break;
					}
					itrr++;
					
					
				}
			}
			else if (gender == 2) {
				itrr = first;
				while (1) {
					if (itrr->second == 2) {
					//	cout << itrr->first << endl;
						num++;
					}
					if (itrr == last) {
						break;
					}
					itrr++;
					
					
				}
			}
			
			return num;
		}
		/*
		void printMap(string Start,string End) {
			for (auto it = mybabies.begin();it != mybabies.end();it++) {
				cout << it->first << endl;
			} 
			
			map<string,int>::iterator first,temp,last,itr,itrr;
			
			first = mybabies.lower_bound(Start);
			if (first == mybabies.end()) {
				cout << "Cannot\n";
			}
			
			cout << first->first << endl;
			
			temp = mybabies.upper_bound(End);
			
			if (temp != mybabies.begin()) {
				last = --temp;
				cout << last->first << endl;
			}
			else {
				last = mybabies.end();
				last--;
				cout << last->first << endl;
			}
			
			/*
			int count = 0;
			for (auto it = mybabies.rbegin(); it != mybabies.rend(); it++){ 	// There isnt a it--
				if ( (it->first).compare(End) <= 0) {        // Finding last key that is smaller than end prefix
					cout << it->first << endl;
					count++;
					break;
				}
			}
			
			if (count == 1) {
				last = mybabies.end(); 		// ALl keys are smaller than end prefix 
			}			
			*/
		//	cout << mybabies.upper_bound(End)->first << endl;
		//	cout << (mybabies.upper_bound(End)--)->first << endl;
};


int main () {
	int num;
	
	babies mybabies;
	while (cin >> num && num != 0) {
		int output;
		
		if (num == 1) {
			string name;
			int gender;
			cin >> name >> gender;
			mybabies.AddSuggestion(name,gender);
			
		}
		else if (num == 2) {
			string name;
			cin >> name;
			mybabies.RemoveSuggestion(name);
		}
		else if (num == 3) {
			string start,end;
			int gender;
			
			cin >> start >> end >> gender;
			
			output = mybabies.Query(start,end,gender);
			
			cout << output << endl;
		}
		/*
		else if (num == 4) {
			string input,input2;
			
			mybabies.printMap(input,input2);
		}*/
	}
	
	return 0;
}
