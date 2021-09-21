#include<stdio.h>

int main()
{
    FILE *fp;
    int c;
    char str[60];

    fp=fopen("chethana.txt","r");

    if(fp==NULL)
    {
        perror("error in oprning file");
        return(-1)
    }
    if(fgets(str,60,fp)!=NULL)
    {
        printf("%s",str);
    }
}