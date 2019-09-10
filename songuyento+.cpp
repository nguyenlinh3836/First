#include <stdio.h>
#include<math.h>
int main(){
	int n[20];
	int count;
	///nhap n
	for(int i=0;i<20;i++){
	scanf("%d",&n[i]);	
	}			
	///dieu kien
	for(int i=0;i<20;i++) {
		count=0;		
		for (int j=1;j<=n[i];j++){
			if (n[i]% j==0){
			count++;			
	}	
}
///xuat ra
	if(count==2 && n[i]>1 ){
		printf("so nguyen to la %d \n",n[i]);	
}
}
	return 0;
}
