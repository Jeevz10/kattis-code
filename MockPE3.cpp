#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
  	cin.tie(NULL);
  	cout.tie(NULL);
	long long tc;
	
	cin >> tc;
	
	multiset<long long>  log;
//	map<long long,int> dupl;
	
	for (long long i = 0; i < tc; i++) {
		long long num;
		
		cin >> num;
		/*
		if (dupl.find(num) == dupl.end()) {
			log.insert(pair<long long,int> (num,1));
			dupl[num] = 1;
		} 
		else {
			dupl[num]++;
			log.insert(pair<long long,int> (num,dupl[num]));
		}*/
		
		log.insert(num);
	}
	/*
	for (auto &it: log) {
	    cout << it.first << endl;
	}
	*/
	int q;
	
	cin >> q;
	
	for (int i = 0;i < q;i++) {
		long long num;
		
		cin >> num;
		
		if (num == 0) {
			long long max = INT_MIN;
			long long min = INT_MAX;
			for (auto &it: log) {
				
				if (it > max) {
					max = it;
				}
				
				if (it < min) {
					min = it;
				}
			}
		//	cout << max << ' ' << min << endl;
			cout << max - min << endl;
		}
		else if (num < 0) {
		    num *= -1;
			for (auto &it: log) {
				if (it == num ) {
				/*	log.erase(pair<long long,int> (num,dupl[num]));
					dupl[num]--; */
					log.erase(it);
				}
			}
			
			/*
	        for (auto &it: log) {
	            cout << it.first << endl;
	        }
	       */
		}
		else if (num > 0) {
		
				log.insert(num);
			    /*
	            for (auto &it: log) {
	                cout << it.first << endl;
	            }
	            */
		
				/*
				for (auto &it: log) {
	                cout << it.first << endl;
	            }*/
			
		}
	}
	
	return 0;
	
}

