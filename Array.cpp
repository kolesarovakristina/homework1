#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define N 20
int main()
{
	
int brr[N];
int i,x;
srand(time(NULL));
    
    for(i=0;i<N;i++)
    {
    brr[i]=rand()%9990+10;
    printf("%d ",brr[i]);
	}
	
int evenCount=0;
  for(i=0;i<N;i++)
 {    
    if(brr[i]%2==0)
          evenCount++;
 }
 printf("\n The number of even numbers: %d \n The count of odd numbers: %d\n", evenCount, N-evenCount);
	
int a=0,b=0,c=0;
	for(i=0;i<N;i++)
	{
	x=brr[i];
		if(x<100)
		{
		a+=1;
		}
		else if((x>=100) and (x<1000))
		{
		b+=1;
		}
		else
		{
		c+=1;
		}
	}
	printf("\nThe count of twoDigit numbers: %d",a);
	printf("\nThe count of threeDigit numbers: %d",b);
	printf("\nThe count of fourDigit numbers: %d\n",c);
	
int max;
  max=brr[0];
    for(i=1;i<N;i++){
       if(max<brr[i])
        max=brr[i];
	}
 printf("\nMax numberis : %d",max);
 
int min;
  min=brr[0];
    for(i=1;i<N;i++){
      if(min>brr[i])
        min=brr[i];
 }
 printf("\nMin number is: %d\n",min);
 
 printf("\nArray from the end:\n");
	for(i=N-1;i>=0;i--)
{
  printf(" %d ",brr[i]);
}
int f=0;
  for(i=0;i<=N;i++)
	{
	x=brr[i];
		if(x%7==0)
		{
		f+=1;	
		}
	}
  printf("\n\nThe count of numbers which are divisible 7: %d\n",f);
	
   printf("Palindromes are: ");
int g=0,h=0,j=0,k=0,q=0,l=0,m=0,n=0,o=0;
   for(i=0;i<N;i++)
	{
	x=brr[i];
		if(x<100)
		{
		g=(x%10);
		h=(x/10);
			if(g==h)
			{
			printf("%d ",x);
			}
		}
		else if((x>=100) and (x<1000))
		{
		j=(x%10);
		k=(x/100);
			if(j==k)
			{
			printf("%d ",x);
			}	
		}
		else
		{
		q=x;
		l=(x%10);
    	x=(x/10);
    	m=(x%10);
	    x=(x/10);
	    n=(x%10);
    	x=(x/10);
    	o=(x%10);
    		if((l==o) and (m==n))
    		{
    		printf("%d ",q);	
			}
		}
	}
}
