#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	while(n<=2 || n>=8) {
		printf("moi nhap lai\n");
		scanf("%d",&n);		
	}
	printf ("thu %d",n);	
	return 0;
}
