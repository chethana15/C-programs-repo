#include<stdio.h>
main()
{
  char s[],*t;
  int len=0;

  scanf("%s",&s);
  t=s;//copying base address of string
  while(*t!='\0')
  {
   len++;
   t++;
  }
  printf("length of string is %d\n",len);
}