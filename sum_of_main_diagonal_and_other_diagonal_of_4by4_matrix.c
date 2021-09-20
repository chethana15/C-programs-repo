#include <stdio.h>

int main(void) 
{
	// your code goes here
	int r=4,c=4;
	int i,j;
	int a[r][c];
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
	    {
	        scanf("%d",&a[i][j]);
	    }
	}
	int sum1,sum2;
	for(i=0;i<r;i++)
	{
	    sum1+=a[i][i];
	    sum2+=a[i][r-i-1];
	}
	printf("%d\t%d\n",sum1,sum2);
	return 0;
}
