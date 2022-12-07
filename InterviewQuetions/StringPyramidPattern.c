/* C Program to Print Characters in a String */
#include <stdio.h>
void main()
{
    char str[100];
    int i ,j;
        
    printf("\n Please Enter any String  :  ");
    scanf("%s", str);
    for(i=0;(str[i]!='\0');i++){
    	for(j=0;j<=i;j++){
    		printf("%c",str[j]);
		}
		printf("\n");
	}
}

//working
