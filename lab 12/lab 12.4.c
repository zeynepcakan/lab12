#include<stdio.h>
#include<string.h>
 
int main() {
   char kelime[5][20], gecici[20];
   int i, j;
 
   printf("\n5 farkl� kelime giriniz : ");
   for (i = 0; i < 5; i++)
      scanf("%s", kelime[i]);
      
 //strcpy( ) fonksiyonu: Bir katar�, bir ba�ka katara kopyalamak i�in kullan�l�r.
 
   for (i = 0; i < 5; i++) {
      for (j = 0; j < 5; j++) {
        	if(kelime[i]>kelime[j])
            {
            	gecici[i] = kelime[i][i];
            	kelime[i][i] = kelime[i][j];
            	kelime[i][j] = gecici[i];
    		}
         }
    }
 
   printf("\nS�ralanm�� hali : ");
   for (i = 0; i < 5; i++)
      printf("\n%s", kelime[i]); 
}
