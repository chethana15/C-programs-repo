#include<stdio.h>
main()
{
 int i,j,r,c;
 scanf("%d",&r);
 scanf("%d",&c);

 int a[r][c],b[r][c],add[r][c];
 
 
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
   add[i][j]=a[i][j]+b[i][j];
  }
 }

 printf("Addition of two matrices is\n");

  for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("%d\t",add[i][j]);
  }

  printf("\n");
 }

}