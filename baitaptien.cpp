#include <stdio.h>

int main(){
	unsigned int tiengui,A,B,C,D,lai;	
	lai=0.08;
	scanf("%d",&tiengui);
	A= tiengui*0.08+tiengui;
	B=A *0.08 + A;
	C= B*0.08 + B;
	D= C*0.08 + C;
	printf("%d la so tien nhan duoc\n ",D);		
	return 0;
}
