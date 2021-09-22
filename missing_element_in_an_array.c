#include <stdio.h>

int main(void) 
{
	// your code goes here
	int a[4]={17,24,38,45};
	int a1,d,k,i;
	a1=a[0];
	d=(a[3]-a1)/4;
	for(i=1;i<5;i++)
	{
	    k=a1+(i*d);
	    if(k!=a[i])
	   break;
	}
	printf("%d\n",k);
	return 0;
}