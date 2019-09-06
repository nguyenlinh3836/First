#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	while(a+b<c && b+c<a && c+a<b){
		printf("moi nhap lai\n");
		scanf("%d",&a);
	    scanf("%d",&b);
	    scanf("%d",&c);
		}
		printf("ba canh tam giac");	
	return 0;
}

