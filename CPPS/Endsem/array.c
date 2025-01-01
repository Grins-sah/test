#include<stdio.h>
int* Modify_array(int arr[],int size){
    static int arr2[10];
    for(int i=0;i<size;i++){
        arr2[i]=arr[i];
        printf("%d ",arr[i]=arr[i]*2);
    }
    printf("\n");
    return arr2;

}
int main(){
    int arr[]={1,2,3,4,6,8,9,8};
    int* result = Modify_array(arr,8);
    for(int i=0;i<8;i++){
        printf("%d",result[i]);
    }


}