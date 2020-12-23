#include <bits/stdc++.h>
using namespace std;

int main() {
 string a1,a2;
 deque<char> b1,b2;
 cin >> a1 >> a2;
 
 int len1,len2;
 
 len1 = a1.length();
 len2 = a2.length();
 


 if (len1 > len2) {
   int j = len2 - 1;
   for (int i = len1 - 1;i >= 0;i--) {
     if (a1[i] > a2[j]) {
       b1.push_front(a1[i]);
       j--;
     }
     else if (a2[j] > a1[i]) {
       b2.push_front(a2[j]);
       j--;
     }
     else if (a2[j] == a1[i]) {
       b1.push_front(a1[i]);
       b2.push_front(a2[j]);
       j--;
     }
     if (j == -1) {
       for (int k = i - 1;k >= 0;k--){
         b1.push_front(a1[k]);
       }
       break;
     }
   }
 }
 else if (len2 > len1) {
   int j = len1 - 1;
   for (int i = len2 - 1;i >= 0;i--) {
     
     
     if (a2[i] > a1[j]) {
       b2.push_front(a2[i]);
       j--;
     }
     else if (a1[j] > a2[i]) {
       b1.push_front(a1[j]);
       j--;
     }
     else if (a2[i] == a1[j]) {
       b1.push_front(a1[j]);
       b2.push_front(a2[i]);
       j--;
     }
     if (j < 0) {
       for (int k = i - 1;k >= 0; k--) {
         b2.push_front(a2[k]);
       }
       break;
     }
   }
 }
 else if (len2 == len1) {
   for (int i = len2 - 1;i >=0;i--) {
    // cout << a1[i] << ' ' << a2[i] << endl;
     
     if (a2[i] > a1[i]) {
      // cout << a2[i] << endl;
       b2.push_front(a2[i]);
     }
     else if (a1[i] > a2[i]) {
       b1.push_front(a1[i]);
     }
     else if (a1[i] == a2[i]) {
       b1.push_front(a1[i]);
       b2.push_front(a2[i]);
     }
   }
 }
 
 	deque<char>::iterator it = b1.begin();
 	deque<char>::iterator itr = b2.begin();
 	int status = 0,status2 = 0;
 	
 	for (int i = 0;i < b1.size();i++) {
		 	if (*it != '0') {   // alternatievely i can do it as *it = 48, it will convert character into integer and compare
		 		status = 1;
		 		break;
			 }
			 *it++;
		 }
 	
 	
 	for (int i = 0;i < b2.size();i++) {
		 	if (*itr != '0') {
		 		status2 = 1;
		 		break;
			 }
			 *itr++;
		 }
 	
 	
 	
 	
 	
 	
 	
 	
 if (b1.size() == 0) {
 	cout << "YODA";
 }
 else if (status == 1) {
 	while (b1.size() > 0) {
 		cout << b1.front();
 		b1.pop_front();
 	}	
 }
 else if (status == 0) {
 	cout << "0";
 }
 
 
 cout << endl;
 
 
 if (b2.size() == 0) {
 	cout << "YODA";
 }
 else if (status2 == 1) {
 	while (b2.size() > 0) {
 		cout << b2.front();
 		b2.pop_front();
	 }
 }
 else if (status == 0) {
 	cout << "0";
 }

// cout << b1.size() << ' ' << b2.size() << endl;
/* for (int i = 0;i <= b1.size();i++) {
   cout << b1.front();    dont do this 
   b1.pop_front();
 }
 cout << endl;
 for (int i = 0;i <= b2.size();i++) {
   cout << b2.front();
   b2.pop_front();
 } 
 	deque<char>::iterator it = b1.begin();
 	deque<char>::iterator itr = b2.begin();
 	
 	while (it != b1.end()) {
 		if (b1.size() == 0) {  //b2.empty()
 			cout << "yoda";
 			break;
		 }
		 int status = 0;
		 for (int i = 0;i < b1.size();i++) {
		 	if (*it != 0) {
		 		status = 1;
		 		break;
			 }
			 *it++;
		 }
		 
		 if (status == 1) {
		 	cout << (*it++);
		 }
		 else if (status == 0) {
		 	cout << "0";
		 }
	 }
	 cout << endl;
	 
 	while (itr != b2.end()) {
 		if (b2.size() == 0) {  //b2.empty()
 			cout << "yoda";
 			break;
		 }
		 int status = 0;
		 for (int i = 0;i < b2.size();i++) {
		 	if (*itr != 0) {
		 		status = 1;
		 		break;
			 }
			 *itr++;
		 }
		 
		 if (status == 1) {
		 	cout << (*itr++);
		 }
		 else if (status == 0) {
		 	cout << "0";
		 }
	 } */
 cout << endl;
 
 return 0;
}
