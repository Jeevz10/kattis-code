#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[5],i = 0,j,k;
	
	for(i = 0;i < 5;i++) {
		// cin >> &arr[i];
		scanf("%d", &arr[i]);
	}
	
	for(i = 0;i < 4;i++) {
		for (j = 0;j < 4 - i;j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j],arr[j + 1]);
				for (k = 0;k < 5;k++) {
					cout << arr[k] << " ";
				}
				cout << endl;
			}
		}
	}
}

/* for (i = 0; i < n; i++)
    for (j = 1; j < n; j++)
      if (A[j-1] > A[j]) {
        swap(A[j], A[j-1]);
        for (k = 0; k < n; k++)
          printf("%d ", A[k]); // notice that Kattis allows having extra ' ' (space) at the end of your lines... Mooshak will be strict and won't allow this
        printf("\n");
      } */
