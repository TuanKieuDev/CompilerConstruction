#include <stdio.h>
#include <string.h>
#include<limits.h>
#include <stdlib.h>

char isNumber(char *text)
{
    int j;
    j = strlen(text);
    while(j--)
    {
        if(text[j] > 47 && text[j] < 58)
            continue;

        return 0;
    }
    return 1;
}


int main(){
	printf("%d\n", INT_MAX);
    char tmp[15];
    scanf("%s", tmp);

    if(isNumber(tmp)){
		int x = atoi(tmp);
		if(x>=0){
			return printf("Valid\n");	
		}   	
    	return printf("Exceed range\n");
	}

    return printf("Error: Not a number!\n");
}
