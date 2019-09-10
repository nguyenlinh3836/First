#include <stdio.h>
int main(){

int x[12];
int s,i;
int avg;
///nhap n
for(int i=0;i<12;i++)
{
	scanf("%d \n",&x[i]);
	}	
///tinh tong 
s=0;
int count=0;
for (int i=0;i<12;i++){	    
	s= s + x[i];
	count++;		
	}	
	avg= s/count;	 	
	
printf(" trung binh la = %d \n",avg);			
	return 0;	
	
	
}
