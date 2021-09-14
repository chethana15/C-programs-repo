include<stdio.h>
main()
{
  char s[],*t;
  scanf("%s",&s);
  t=s;
  while(*t!='\0')
  {
   printf("%c",*t);
   t++;
  }
  printf("\n");
}