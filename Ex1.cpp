#include <stdio.h> 
int main() {
	int n,i;
	int s=0;
	printf (" Enter number:");
	scanf("%d",&n);	
	while(n>0) {
		i=n%10;
		s= s + i;
		n=n/10;
	}	
	printf(" Total digits : %d",s);	
	return 0;
}
