#include <stdio.h>

int main(void) 
{
	// your code goes here
	int a[]={10,12,14,18,20};
	int y=sizeof(a);
	int z=sizeof(a[0]);
	int l=y/z;
	int a1,d,k,i;
	a1=a[0];
	d=(a[l-1]-a1)/4;
	for(i=1;i<l;i++)
	{
	    k=a1+(i*d);
	    if(k!=a[i])
	   break;
	}
	printf("%d\n",k);
	return 0;
}
