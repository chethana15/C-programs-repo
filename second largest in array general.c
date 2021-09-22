#include <stdio.h>

int main(void) 
{
	// your code goes here
	int A[]={10,20,30,40,50};
	//int A[]={15,13,17,21,40,18};
    int k=sizeof(A);
    int m=sizeof(A[0]);
    int l=0;
    l=k/m;
    printf("%d\n",max2(A,l));
	return 0;
}
int max2(int a[],int size)
{
    int i,j,temp,count;
    for(i=0;i<size;i++)
    {
        count=0;
        for(j=i+1;j<size;j++)
        {
            if(a[i]<a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
           
        }
        count++;
            if(count==2)
            break;
    }
    return a[1];
}