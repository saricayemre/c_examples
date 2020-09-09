#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
char cumle[100];
printf("Bir cumle giriniz (max 100 karakter):");
gets(cumle);
printf("%c",cumle[0]);
for(i=0;i<=100;i++){
	if(cumle[i]==' '){
		printf("%c",cumle[i+1]);
}
}	
getch();
return 0;
}