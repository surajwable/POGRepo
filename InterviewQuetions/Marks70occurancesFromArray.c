//not working

#include<stdio.h>
void main(){
	int arr[]={10,45,50,50,50,55,60,70,70,70,75,80,95};
	int low=0;
	int high;
	int key=70;
	int mid=19;
	int count=0;
	high=sizeof(arr)-1;
	mid=(low+high)/2;
	while((arr[mid]!=key)&&(low<high)){
		if(key<arr[mid]){
		high=mid-1;	
		}
		else{
			low=mid+1;
			mid=(low+high)/2;
		}
	}
	if(arr[mid]==key){
		count++;
		low=mid-1;
		while((low>=0)&&arr[low]==key){
			count++;
			low--;
		}
	}
	high=mid-1;
	while((high<=19)&&(arr[high]==key))
	{
		count++;
		high++;
	}
		else{
			count=-1;
		}
	
}
