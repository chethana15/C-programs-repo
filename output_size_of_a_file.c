#include<stdio.h>
int main()
{
FILE *fp=NULL;
int len;

fp=fopen("chethana.txt","r");
if(fp==NULL)
{
    perror("error opening file");
    return(-1);
}
fseek(fp,0,SEEK_END);

len=ftell(fp);
fclose(fp);

printf("total size of chethana.txt=%d bytes\n",len);
return 0;
}