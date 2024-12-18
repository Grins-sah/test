#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	int* min=&arr[0];
	int* max=&arr[0];
	for(int i=0;i<n;i++){
		if(*min<arr[i]) min = & arr[i];
		else if(arr[i]>*max) max = & arr[i];
	}
	int temp = * min;
	*min = *max;
	*max = temp;
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
