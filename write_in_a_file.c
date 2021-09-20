#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 main ()
 {
    FILE *file;
    char s[100];
    file=fopen("sum_of_main_diagonal_matrix_4by4","w");

     if(file==NULL)
     {
      printf("File Not Found\n");
      exit(0);
     }
     else
     {
      printf("Enter lines to write in file\n");
      while(strlen(gets(s))>0)
      {
       fputs(s,file);
       fputs("\n",file);
      }
     }
    fclose(file);
 }