#include <stdio.h>
int main()  {
	int n[20];
	
	for(int i=0;i<20;i++){
		scanf("%d",&n[i]);
	}
		for(int i=0;i<20;i++){
		if ( n[i]%2 != 0) 
		{			
			printf (" so le la : %d\n",n[i]);		
		}		
		
	}	
	
	
	return 0;
}




