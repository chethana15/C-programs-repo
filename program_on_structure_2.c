#include<stdio.h>
#include<string.h>
 struct Book{
  int id,price;
  char name[100];
 }a1,a2;
main()
{

  
  
  scanf("%s",&a1.name);
  scanf("%d",&a1.price);

  scanf("%s",&a2.name);
  scanf("%d",&a2.price);

   printf("Book 1 Name=%s\n",a1.name);
   printf("Book 1 Price=%d\n",a1.price);

   printf("Book 2 Name=%s\n",a2.name);
   printf("Book 2 Price=%d\n",a2.price);

}