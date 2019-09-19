#include <stdio.h>
#include <string.h>

void lowerCase(char s[]) {
	printf("Enter string: ");
	scanf("%s",s);	
 for (int i=0;i<strlen(s);++i) {	
	if (s[i] >= 65 && s[i]<=90) {
	printf("%2c",s[i] +32 );
	} else {
		printf(" %2c",s[i]);
	}
}
}
int main() {
	char s[50];
	lowerCase(s);
	
}
