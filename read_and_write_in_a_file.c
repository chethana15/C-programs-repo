#include<stdio.h>

int main()
{
    FILE*fp=NULL;
    fp=fopen("chethana.txt","w+");

    if(!fp)
    {
        fprintf(fp,"%s %s %s %s %d","I","was","born","on",15);

        fclose(fp);
        retuen(0); 
    }
}