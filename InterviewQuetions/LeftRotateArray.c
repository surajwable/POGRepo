//not working


#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int i,t;
	t=arr[0];
	for(i=0;i<4;i++){
		arr[i]=arr[i+1];
		arr[i]=t;
	}
	for(i=0;i<5;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
