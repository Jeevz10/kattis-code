#include <bits/stdc++.h>
using namespace std;

int main() {
	
//	int tt[] = {1,2,2,3,4,5},num,i;
	int i,tc,num,temp;
	vector<int> test;
	vector<int>::iterator j,k;
	
//	test.assign(tt,tt+6);
	
	cin >> tc;
	
	for (i = 0;i < tc;i++) {
		
		cin >> num;
		j = upper_bound(test.begin(),test.end(),num);
		
		if (i == 0) {
			test.push_back(num);
		}
		
		if (i == 1) {
			if (num < test[0]) {
				test[0] = temp;
				test[0] = num;
				test.push_back(temp);
			//	median += (temp + num) / 2;
				continue;
			}
			
			else {
				test.push_back(num);
			}
		}
		
		test.insert(j,num);
	}
	
	
//	j = lower_bound(test.begin(),test.end(),num);
//	k = upper_bound(test.begin(),test.end(),num);
	
//	test.insert(k,num);
	
	

	for (i = 0;i < test.size();i++) {
		cout << test[i] << " ";
	}
	
	cout << endl;
	
	//	cout << j - test.begin() << endl;
	//	cout << k - test.begin() << endl;

	return 0;
		
	 
}

















/*  1. bool all_of (InputIterator first, InputIterator last, UnaryPredicate pred); 
	Returns true if pred returns true for all the elements in the range [first,last) or if the range is empty, and false otherwise.
	 eg : if ( std::all_of(foo.begin(), foo.end(), [](int i){return i%2;}) )
    std::cout << "All the elements are odd numbers.\n";
    
    2. bool any_of (InputIterator first, InputIterator last, UnaryPredicate pred);
    eturns true if pred returns true for any of the elements in the range [first,last), and false otherwise. If [first,last) is an empty range, the function returns false.
    
     eg: if ( std::any_of(foo.begin(), foo.end(), [](int i){return i<0;}) )
    std::cout << "There are negative elements in the range.\n";
    
    3. bool none_of (InputIterator first, InputIterator last, UnaryPredicate pred);
    Returns true if pred returns false for all the elements in the range [first,last) or if the range is empty, and false otherwise. Test if no elements fulfill condition
    
    eg: if ( std::none_of(foo.begin(), foo.end(), [](int i){return i<0;}) )
    std::cout << "There are no negative elements in the range.\n";
    
    4. sum_of_digit(n) 
    5. 


    

    */
    

	
	
