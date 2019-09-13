#include <stdio.h>
	
void so_le (int a[],int n){
	for (int i=0;i<n;i++){
		if (a[i] %2 !=0){	
	printf ("so le la: %d\n ",a[i]);
	}	
		}
			}			
	
int main (){
	int n[6]={9,1,2,3,4,6};
	so_le(n,6);	
}
