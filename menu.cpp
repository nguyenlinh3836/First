#include <stdio.h>

int main (){
	int n,a,b;
    do{
    	printf("==================MENU================\n");
	    printf("1.Chon mon an\n");
	    printf("2.Do uong\n");
	    printf("3.Thanh toan\n");
	    printf("4.Thoat\n");
	    printf("Xin moi chon : ");
	    scanf("%d",&n);
	    switch (n)
		{
	        case 1:
	        printf("1.Com ga\n");
	        printf("2.Bun\n");
	        printf("3.Pho\n");
	        printf("4.Quay lai\n");
	        printf("Moi chon mon:");
	        scanf("%d",&a);
	        switch(a){
	            case 1: printf ("Cam on da chon com ga\n");break;
	            case 2:printf ("Cam on da chon bun\n");break;
	            case 3:printf ("Cam on da chon pho\n");break;
	        }
	        break;
	
	        case 2:
	        printf("==================MENU================\n");
	        printf("1.Nuoc cam\n");
	        printf("2.Sinh to\n");
	        printf("3.Cafe\n");
	        printf("4.Quay lai\n");
	        printf("moi chon mon:");
	        scanf("%d",&b);
	        switch(b){
	            case 1: printf ("Cam on da chon nuoc cam\n ");break;
	            case 2:printf ("Cam on da chon sinh to\n ");break;
	            case 3:printf ("Cam on da chon cafe\n");break;
	    	}
	    	break;	
	        case 3: 
			printf (" nhan vien se dua hoa don vui long doi \n");break;
			case 4:  break;
	
	    }
	}while (n!=4 && n!=3 );
    
	return 0;
}
