#include<stdio.h>
main()
{
 int i,n,search,count=0;
 scanf("%d",&n);
 int a[n];
    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
    {
     scanf("%d\t",&a[i]);
    }

    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
     if(a[i]==search)
     {
      count=1;

     }
    }

    if(count==1)
    {
     printf("element found\n");
    }
    else
    {
     printf("element not found\n");
    }
}