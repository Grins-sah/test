#include<stdio.h>
#include<string.h>
/**
 * jump op in this function
 * very nice intution
 */
void g(int* x){
    printf("the value of x is %d",*x);
}
void f(int x){
    g(&x);
}
int main(){
    f(10);
}