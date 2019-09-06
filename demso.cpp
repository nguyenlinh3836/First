#include <stdio.h>
int main(){
	int n;
	int count=1;
	printf ("moi nhap n:");
	scanf("%d",&n);
	for(;n>=10;){
	n=n/10;
	count++;	
	}
	printf("so chu so la %d",count);
	
	
	
	
	return 0;
}
