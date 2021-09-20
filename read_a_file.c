#include<stdio.h>
#include<stdlib.h>
 main ()
 {
    FILE *file;
    char c;
    file=fopen("sum_of_main_diagonal_matrix_4by4.txt","r");
    while(1)
    {
     if(file==NULL)
     {
      printf("File Not Found\n");
      exit(0);
     }
     else
     {
      c=fgetc(file);
      if(c==EOF)
      {
       break;
      }
      printf("%c",c);
     }
    }
    fclose(file);
 }