#include<stdio.h>
main()
{

int num;
scanf("%d",&num);

int i,j,temp;
int a[num];

for(i=0;i<num;i++)
{
 scanf("%d\n",&a[i]);
}

for(i=0;i<num;i++)
{
 for(j=i+1;j<num;j++)
 {
  if(a[i]>a[j])
  {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
  }
 }
}

for(i=0;i<num;i++)
{
 printf("%d\n",a[i]);
}
return 0;
}
