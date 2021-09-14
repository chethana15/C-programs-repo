#include<stdio.h>
main()
{
 int i,j,n,search,temp,low,mid,high,count=0;
 printf("Enter size of array\n");
 scanf("%d",&n);
 int a[n-1];
    printf("Enter the numbers in any order\n");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }

    printf("Enter the element to be searched\n");
    scanf("%d",&search);
    //sorting array elements in ascending order
    for(i=0;i<n;i++)
    {
     for(j=i+1;j<n;j++)
 {
  if(a[i]>a[j])
  {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
  }
 }
    }

    printf("Sorted array is\n");
     for(i=0;i<n;i++)
    {
     printf("%d\n",a[i]);
    }
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
     printf("Search Successful\n");
    }
    else
    {
     printf("Search is not Successful\n");
    }

}