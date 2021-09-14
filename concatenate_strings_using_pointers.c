#include<stdio.h>
main()
{
  char s1[],s2[],*t1,*t2;
  int len1=0,len2=0,i;
  scanf("%s",&s1);
  scanf("%s",&s2);
  t1=s1;
  t2=s2;
  while(*t1!='\0')
  {
   t1++;
   len1++;
  }
 
  while(*t2!='\0')
  {
   *t1=*t2;
   t1++;
   t2++;
   len2++;
  }
  *t1='\0';
  i=0;
  
  while(i<len1+len2)
  {
   i++;
   t1--;
  }

    printf("Concatenated String is ");

    while(*t1!='\0')
    {
     printf("%c",*t1);
     t1++;
    }

printf("\n");
}