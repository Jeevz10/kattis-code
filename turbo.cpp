#include <bits/stdc++.h>
using namespace std;

int decBubbleSort(int arr[],int,int);
int incBubbleSort(int arr[],int,int);
int main() {
	int n,i,oddphase = 0,evenphase = n;
	cin >> n;
	int arr[n];
	
	for (i = 0; i < n;i++) {
		int num;
		cin >> num;
		arr[i] = num;
	}
	
	for (i = 1;i <= n;i++) {
		int num2;
		if (i % 2 == 1) {
			num2 = decBubbleSort(arr,evenphase,oddphase);
			oddphase++;
			cout << num2 << endl;
		}
		else if (i % 2 == 0) {
			num2 = incBubbleSort(arr,evenphase,oddphase);
			evenphase--;
			cout << num2 << endl;
			
		}
	}
	
	return 0;
}

int decBubbleSort(int arr[],int evenphase,int oddphase) {
	int i,j,count = 0;
	
	for (i = oddphase;i < evenphase-1;i++) {
		for (j = i;j < evenphase - i - 1;j++) {
			if (arr[j+1] < arr[j]) {
				swap(arr[j+1],arr[j]);
				count++;
			}
		}
	}
 	
 	return count;

}

int incBubbleSort(int arr[],int evenphase,int oddphase) {
	int i,j,count = 0;
	
	for (i = oddphase;i < evenphase -1;i++) {
		for (j = i;j < evenphase - i - 1;j++) {
			if (arr[j] > arr[j+1]) {
				swap(arr[j+1],arr[j]);
				count++;
			}
		}
	}
	return count;
}
