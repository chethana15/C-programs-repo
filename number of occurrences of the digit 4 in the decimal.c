#include <stdio.h>

int main(void) 
{
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int n,x,count=0;
	    scanf("%d",&n);
	    while(n>0)
	    {
	        x=n%10;
	        n=n/10;
	         if(x==4)
	        {
	            count++;
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}
