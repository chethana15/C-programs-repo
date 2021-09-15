#include<stdio.h>
main()
{
 int i,j,r,c;
 scanf("%d",&r);
 scanf("%d",&c);

 int a[r][c],b[r][c],sub[r][c];
 
 
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }

  
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }
 
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   sub[i][j]=a[i][j]-b[i][j];
  }
 }

 printf("Subtraction of two matrices is\n");

  for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("%d\t",sub[i][j]);
  }

  printf("\n");
 }

}