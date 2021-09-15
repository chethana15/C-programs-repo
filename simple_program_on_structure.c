#include<stdio.h>
#include<string.h>
struct novel{
    int price;
    char name[];
};
main()
{
    struct novel a;
    scanf("%s",&a.name);
    scanf("%d",&a.price);

    printf("Book name:%s\n",a.name);
    printf("Price:%d\n",a.price);
}