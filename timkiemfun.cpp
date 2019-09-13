#include <stdio.h>

int tim_kiem( int a[], int n,int b) {
	for (int i=0;i<n;i++){
	
		if (a[i]==b){
			return true;
		}
			return false;
}


	
 

}


int main() {
	int z[6]={9,8,5,2,1,3};	
	int x;
	scanf("%d,&x");	
	 if (tim_kiem(z,6,x)){
	 	printf (" co trong mang");
	 } else{
	 	printf (" khong co trong mang");
	 }	 
}
