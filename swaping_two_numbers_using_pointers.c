#include<stdio.h>
void swap(int ,int);
main( )
{
int a,b;
printf("Enter a and b values\n");
scanf("%d%d",&a,&b);
printf ("Values before Swap\na=%d\nb=%d\n",a,b ) ;
swap(&a,&b ) ;
printf ("Values after Swap\na=%d\nb=%d\n",a,b ) ;
}
void swap( int *x, int *y )
{
int temp ;
temp = *x ;
*x = *y ;
*y = temp ;
}