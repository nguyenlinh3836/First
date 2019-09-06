#include <stdio.h>
int main(){
	int n;
	printf("moi chon mon :");
	printf("1.cafe\n");
	printf("2.sinh to\n");
	printf("3.nuoc ep\n");
	scanf("%d",&n);
	while (n<1 ||n>3){
		printf(" moi chon lai mon\n");
		scanf("%d",&n);
		}	
		switch (n){
		case 1: printf("cam on da chon cafe vui long doi");break;
		case 2: printf("cam on da chon sinh to vui long doi");break;
		case 3:	printf("cam on da chon nuoc ep vui long doi");break;			
		}	
	
	return 0;
}
