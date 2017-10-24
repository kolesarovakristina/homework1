#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<stdlib.h>

int main ()
{
	char spz[6];
	int i,j;
	int type;

	srand (time(NULL));
	
	
	printf("KE");
	for(i=0;i<=5;i++){
		
		switch(i)
		{
			case 0:j=rand()%10+48;spz[i]=(char)j;break;
			case 1:j=rand()%10+48;spz[i]=(char)j;break;
			case 2:j=rand()%10+48;spz[i]=(char)j;break;
			case 3:j=rand()%26+65;spz[i]=(char)j;break;
			case 4:j=rand()%26+65;spz[i]=(char)j;break;
			
		}
	}
  spz[5]='\0';
	printf("%s",spz);
	
	
}
