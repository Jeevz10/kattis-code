#include <bits/stdc++.h>
using namespace std;
/*
int main()
{	/*
	map< int,set<int> > a;
	set<int> s;
	a.insert(pair<int,set<int>>(1,s));
	a.insert(pair<int,set<int>>(2,s));
	for (auto it : a)
	{
		cout << it.first << endl; // if a is a map pair, set; then you it.first.first; 
	}
	
	for (map< int, set<int>>::iterator it = a.begin(); it != a.end(); ++it)
	{
		cout << it->first << endl;
	}
	return 0; 
} */

struct cmp
{
    bool operator() (string a, string b)
    {
    	if (a == "hi" && b != "bi") {
    		return true;
		}
		else if (b == "hi" && a != "hi") {
			return false;
		}
		else {
			return a < b;
		}
		
    }
};

	
int main() {
	set<string,cmp> log;
		
	log.insert("oi");		
	log.insert("ko");
	log.insert("hi");
	log.insert("a");
		
	for (auto &it : log) {
		cout << it << endl;
	}
	
	int var = 4;
	cout << var << endl;
	cout << var + 1 << endl;
	cout << var << endl;
}

