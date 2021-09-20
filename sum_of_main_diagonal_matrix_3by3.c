#include <stdio.h>

int main(void) 
{
	// your code goes here
	int r=3,c=3,i,j;
	int a[r][c];
	if(r==c)
	{
	    for(i=0;i<r;i++)
	    {
	        for(j=0;j<c;j++)
	        {
	            scanf("%d",&a[i][j]);
	        }
	    }
	}
	int sum=0;
	for(i=0;i<r;i++)
	    {
	        for(j=0;j<c;j++)
	        {
	            if(i==j)
	            sum+=a[i][i];
	        }
	    }
	    printf("%d\n",sum);
	return 0;
}

