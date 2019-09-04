#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,delta,x1,x2;
	printf("nhap a !=0\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
		delta = b*b-4*a*c;
		if (delta < 0){
			printf ("phuong trinh vo nghiem\n");
		}else if(delta==0) {
			x1=x2=-b/(2*a);
			printf("phuong trinh co nghiem kep %f\n",x1);		
		}else{
			delta= sqrt(delta);
			x1= ((-b+delta)/(2*a));
			x2=((-b-delta)/(2*a));
			printf("phuong trinh co 2 nghiem phan biet x1=%f\n ",x1);
			printf("phuong trinh co 2 nghiem phan biet x2=%f\n",x2);
		}
			return 0;		
	}
