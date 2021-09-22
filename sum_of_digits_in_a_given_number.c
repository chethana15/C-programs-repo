//write a function to find sum of digits in a number
#include <stdio.h>

int main(void) 
{
	// your code goes here
	int n;
	scanf("%d\n",&n);
	printf("%d\n",sum(n));
	return 0;
}

int sum(int num)
{
    int temp,x,sum=0;
    while(num!=0)
    {
        x=num%10;
        sum+=x;
        num=num/10;
    }
    return sum;
}