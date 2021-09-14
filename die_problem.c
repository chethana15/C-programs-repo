/* There are three people, and each of them has an unbiased 6-sided die. The result of rolling a die will be a number between 1 and 6 (inclusive) with equal probability.

The three people throw their dice simultaneously. In this game, the third person wins only if his number is strictly greater than the sum of the other two numbers. Given that the first person rolls the value X and the second person rolls the value Y, what is the probability the third person will win?

Input Format
The first line contains an integer T, the number of test cases. Then the test cases follow.
Each test case contains two integers X and Y.
Output Format*/
#include <stdio.h>
#include<math.h>

int main(void) 
{
	// your code goes here
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
	    int a,b,i;
	    float count=0;
	    float m;
	    //int c[6]={1,2,3,4,5,6};
	    scanf("%d\t %d\n",&a,&b);
	    /*if(a+b>=6)
	    {
	        printf("0\n");
	       // break;
	    }*/
	    int k=a+b;
	    if(k<6)
	    {
	    
	    for(i=1;i<=6;i++)
	    {
	        if(k<i)
	        {
	            count=count+1;
	        }
	    }
	    m=count/6;
	    printf("%0.6f\n",m);
	    }
	    else
	    {
	        printf("0\n");
	    }
	   count=0; 
	}
	return 0;
}

