//max of array
#include <stdio.h>

int main(void) 
{
	// your code goes here
	int a[5]={10,20,30,40,50};
	//int a[6]={15,13,17,21,40,18};
	printf("%d\n",max(a,5));
	
	
	return 0;
}

int max(int array[],int size)
{
    int i,j,temp,count=0;
    for(i=0;i<size;i++)
    {
        if(array[0]<array[i])
        array[0]=array[i];
    }
    return array[0];
}