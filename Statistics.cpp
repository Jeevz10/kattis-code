#include <bits/stdc++.h>
//#include <iostream>
//#include <stdio.h>
using namespace std;

int main() {
	int num,x,i = 0,y = 0;
	
	while (scanf("%d",&num) != EOF) {
		int max = -1e6,min = 1e6;
		for (i = 0;i < num;i++) {
			scanf("%d",&x);
			
			if (x > max) {
				max = x;
			}
			
			if (x < min) {
				min = x;
			}
		}
		
		y++;
		
		printf("Case %d: %d %d %d\n", y,min,max,max-min);
	}
	
	return 0;
	
}
