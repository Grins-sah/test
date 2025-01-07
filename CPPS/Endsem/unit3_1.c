#include<stdio.h>
#include<stdlib.h>
void fn(int* x){
    printf("{%d, %p }\n",*x,x);
    return ;
}
int main(){
    int x;
    printf("Enter the number X : ");
    scanf("%d",&x);
    fn(&x);

}