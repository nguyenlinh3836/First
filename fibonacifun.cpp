#include <stdio.h> 
int fibonaci(int n) {
	int a,a1=0,a2=1;
	for (int i=0;i<n;i++) {
		a=a1+a2;
		a1=a2;
		a2=a;
	}
	return a;
}

int main() {
	int a;
	printf ("nhap n :");
	scanf("%d",&a);
	printf(" so fibonaci thu %d la %d",a,fibonaci(a));
	return 0;
}
	
	
	
	
	

