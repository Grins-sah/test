#include<stdio.h>
void fnx(int x){
    printf("The value of x in function z is %d\n",x);

}
void fng(int* x){
    printf("The value of x in function g is %d\n",*x);
    fnx(2*(*x));
}
int main(){
    int x;
    scanf("%d",&x);
    fng(&x);

}