#include<stdio.h>
#include<stdlib.h>
int size(int arr[]){
    for(int i=0;i<3;i++){
        arr[i]=56;
    }
    return 0;
}
int main(){
    int arr[] ={1,2,3,4,5,6};
    int n = sizeof(arr);
    printf("The Address of arr is %d \n",arr);
    printf("The size of arr is %d \n",size(arr));
    for(int i=0;i<3;i++){
        printf("%d\n",arr[i]);
    }
    printf("The size of arr is %d \n",n);
    
}