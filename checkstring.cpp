#include <stdio.h>
#include <string.h>
int main (){	
	int n;
	char a[n][20];
	char str[10]= "xinchao" ;
	printf (" nhap so chuoi cua mang:");
	scanf ("%d",&n);
	
	for (int i=0;i<n;i++){		

	printf("nhap phan tu cua mang  ");		
	scanf ("%s",&a[i]);
}

if ( strcmp(a[n] ,str)<0)
{
 printf ("chuoi khong thuoc mang");
} 
else if( strcmp(a[n] ,str)>0){

printf ("chuoi khong thuoc mang");
} 
else{
 printf("chuoi thuoc mang "); 
}    
	return 0;
}
