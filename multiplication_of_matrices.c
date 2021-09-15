#include<stdio.h>
main()
{
 int i,j,k,r1,c1,r2,c2,sum=0;
 scanf("%d %d",&r1,&c1);
 scanf("%d %d",&r2,&c2);

 int a1[r1][c1],a2[r2][c2],mul[r1][c2];
 if(c1==r2)
 {
  
 for(i=0;i<r1;i++)
 {
  for(j=0;j<c1;j++)
  {
   scanf("%d",&a1[i][j]);
  }
 }
  
  
 for(i=0;i<r2;i++)
 {
  for(j=0;j<c2;j++)
  {
   scanf("%d",&a2[i][j]);
  }
 }
 
 for(i=0;i<r1;i++)
 {
  for(j=0;j<c2;j++)
  {
   for(k=0;k<r2;k++)
   {
    sum+=a1[i][k]*a2[k][j];
   }
   mul[i][j]=sum;
   sum=0;
  }
 }

 printf("Multiplication of matrices is\n");

  for(i=0;i<r1;i++)
 {
  for(j=0;j<c2;j++)
  {
   printf("%d\t",mul[i][j]);
  }

  printf("\n");
 }
 }
 else
 {
  printf("Not possible with the given rows and columns\n");
 
 }

}