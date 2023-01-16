#include <stdio.h>
#include <string.h>
// Acýklama satirlari uzun yollari!

main()
{
	char str[100];
	
	printf("Enter a sentence (max 100 characters):");
	gets(str);
	int c=0,i,x,k,z;
	char sesli[10]={'A','E','I','O','U','a','e','i','u','o'};
	
/*	for (i=0;i < strlen(str); i++) 
	{
		if(str[i] == 'a' || str[i] =='e'|| str[i]=='i'|| str[i]=='o'||str[i]=='u')
		{
			c++;
		}
	}	*/
	int j;
	for(i=0; str[i]!='\0'; i++){
		for(j=0; sesli[j]!='\0'; j++){
			if(str[i]==sesli[j])
				c++;
		}
	}
	
	printf("\nThere are %d vowels in the entered sentence.", c);
	for (i=0; i<strlen(str); i++)
	{
		if(str[i]==' ')
		x++;
    }
    printf("\nThere are %d white spaces.",x);
    
   	for ( i=0; i<strlen(str); i++)
   	{
   	//	if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
   		if(str[i]>='0'&& str[i]<='9')
   		k++;
	}
	printf("\nThere are %d digits.",k);
    z=strlen(str)-(c+x+k);
    printf("\nThere are %d consonants",z);
     return 0;
}
