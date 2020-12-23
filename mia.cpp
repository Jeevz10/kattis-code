#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,d,x,y;
	
	while (true) {
		
		scanf("%d %d %d %d",&a,&b,&c,&d);
		
		if (a==0 && b==0 & c== 0 && d==0) {
			break;
		}
		
		else if(a==c && b==d || a==d && b==c) {
			printf("Tie.\n");
		}
		
		else if(a==1 && b==2 || a==2 && b==1) {
			printf("Player 1 wins.\n");	
		}
		
		else if(c==1 && d==2 || c==2 && d==1) {
			printf("Player 2 wins.\n");
		}
		
		else if(a==b && c==d) {
			if(a > c) {
				printf("Player 1 wins.\n");
			}
			else if(c > a) {
				printf("Player 2 wins.\n");
			}	
		}
		else if(a==b && c!=d) {
			printf("Player 1 wins.\n");
		}
		
		else if(a!=b && c==d) {
			printf("Player 2 wins.\n");
		}
		else {
			if (b>a) {
				x = (10*b) + a;
			}
			else {
				x = (10*a) + b;
			}
			if (d>c) {
				y = (10*d) + c;
			}
			else {
				y = (10*c) + d;
			}
			
			if (x > y) {
				printf("Player 1 wins.\n");
			}
			else {
				printf("Player 2 wins.\n");
			}
		}
	
	}
	
	return 0;
}
