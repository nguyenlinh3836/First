#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("gia tri cua a la %d\n",a);
	printf("gia tri cua b la %d\n",b);	
	return 0;
}
