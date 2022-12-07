#include<stdio.h>
int main(){
	int i,j,no;
	printf("\n Enter Number of Rows");
	scanf("%d",&no);
	for(i=no;i>0;i--){
		
		for(j=0;j<i;j++) printf("*");
		for(j=i;j<no;j++) printf(" ");
		for(j=i;j<no;j++) printf(" ");
		for(j=0;j<i;j++) printf("*");
		printf("\n");
	}
	for(i=1;i<no;i++){
		
		for(j=0;j<i;j++) printf("*");
		for(j=i;j<no;j++) printf(" ");
		for(j=i;j<no;j++) printf(" ");
		for(j=0;j<i;j++) printf("*");
		printf("\n");
	}
	return 0;
}
