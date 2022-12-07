//not Working
#include<stdio.h>
void main(){
	int row,col,n;
	printf("\n Enter number of rows");
	scanf("%d",&n);
	for(col=1;row<n;row++){
		for(col=1;col<=row;col++){
			if((col==1)||row==col)){
			arr[row][col]=1;	
			}
			else{
				arr[row][col]=arr[row-1][col]+[row-1][col-1];
				printf("%d",arr[row][col]);
			}
			printf("\n");
			 
		}
		return 0;
	}
}
