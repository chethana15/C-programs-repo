#include<stdio.h>
main()
{
 int i,n,search,low,mid,high,count=0;
 printf("Enter size of array\n");
 scanf("%d",&n);
 int a[n-1];
   
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }

    scanf("%d",&search);

    low=1;
    high=n;

 do
    {
     mid=(high+low)/2;
     if(search<a[mid])
     {
      high=mid-1;
      count=0;
     }
    else if(search>a[mid])
     {
      low=mid+1;
      count=0;
     }
     else
     {
      count=1;
      break;
     }
    }
    while(search!=a[mid]&&low<=high);

    if(count==1)
    {
     printf("element found\n");
    }
    else
    {
     printf("element not found\n");
    }

}