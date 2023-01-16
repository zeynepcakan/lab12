#include <stdio.h>
int main()
{
	char name1[100],name2[100],name3[100];
	printf("please enter your name: ");
	gets(name1);
	printf("please enter your second name: ");
	gets(name2);
	int i=0,j=0;
	while (name1[i]!='\0'){
		name3[j]=name1[i];
		i++;
		j++;
	}
	i=0;
	while (name2[i]!='\0'){
		name3[j]=name2[i];
		i++;
		j++;
	}
	printf("\n");
	puts(name3);
}
