#include<stdio.h>
 struct Book{
  int price;
  char name[100];
 }b[3];
main()
{
int i,max=3;
  for(i=0;i<max;i++)
  {
    scanf("%s",&b[i].name);
    scanf("%d",&b[i].price);
  }

   for(i=0;i<max;i++)
   {
       printf("Book %d Name=%s\n",i+1,b[i].name);
       printf("Book %d Price=%d\n",i+1,b[i].price);
    }
}
