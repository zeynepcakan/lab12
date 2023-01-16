#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char metin[100];
	int i;
	printf("metini giriniz:  ");
	gets(metin);
	for(i=0; metin[i]!='\0'; i++)
	{
	
		if ((metin[i] >= 'a' && metin[i] <= 'z') || (metin[i] >= 'A' && metin[i] <= 'Z'))
		printf("%c",metin[i]);
		else
		printf("");
	}
	return 0;
}
//ASCII tablusundaki deðerini bulma;
	/*printf("%c=%d",metin[i],metin[i]);
	printf("\n");*/	
