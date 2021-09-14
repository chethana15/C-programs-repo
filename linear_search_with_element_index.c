//LINEAR SEARCH
#include<stdio.h>
void main()
{
int n;
scanf("%d\n",&n);

int a[n], i, search_element, count=0, pos;

for(i=0; i<n; i++)
{
scanf("%d\n",&a[i]);
}

scanf("%d",&search_element);

for(i=0; i<n; i++)
{
if(a[i]==search_element)
 {
count=1;
pos=i+1;
break;
 }
}

if(count==0)
 {
printf("Number not found..!!");
 }
else
 {
printf("%d found at position %d",search_element, pos);
 }
 return 0;
}
