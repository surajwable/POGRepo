#include<stdio.h>
void main(){
	int arr[]={10,20,28,25,37,72};
	int i;
	int largest;
	int secondlargest;
	for(i=0;i<sizeof(arr);i++){
			if(arr[i]>largest){
		secondlargest=largest;
		largest=arr[i];
	}
	else if(arr[i]>secondlargest){
		secondlargest=largest;
		secondlargest=arr[i];
	}
	}
	printf("Largest Number is:%d",largest);
	printf("secondLargest Number is:%d",secondlargest);	
}
