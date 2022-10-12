#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
   char ch, file_name[25];
   FILE *fp;
   int countLine=0, countNum=0, countChar=0;
   printf("Enter name of a file\n");
   gets(file_name);
   fp = fopen(file_name, "r");

   if (fp == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }
   printf("The contents of %s file are:\n", file_name);
   char line[500];
   while (fgets(line, sizeof(line), fp)) {
   printf("%s", line);
   int i;
   for(i=0; i< strlen(line);i++){
		if(isdigit(line[i]))
		countNum++;
		else if(isalpha(line[i]))
		 countChar++;	
	}
   countLine++;
   }
   fclose(fp);
   printf("\nNumber of line:%d\n", countLine);
   printf("\nNumber of digit:%d\n", countNum);
   printf("\nNumber of character:%d\n", countChar);
   
   return 0;
}
