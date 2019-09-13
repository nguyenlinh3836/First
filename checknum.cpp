#include<stdio.h>

bool checknum(int a[],int n, int x){
	for(int i=0;i<n;i++){
		if(x==a[i]){
			return true;
		}
	}
	return false;
}

int main(){
	int a[100],n,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Nhap so can ktra: ");
	scanf("%d",&x);
	
	if(checknum(a,n,x))
		printf("So can kiem tra co trong mang! \n");
	else
		printf("So can kiem tra khong co trong mang! \n");
		
	return 0;
	
}
