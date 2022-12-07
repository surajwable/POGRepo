//Working
#include<stdio.h>
void main(){
	char str[]="HelloWorld";
	char*p=str;
	printf("%s",p+strlen(p+3));
}
