#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char str1[]="GRINS";
    strrev(str1);
    switch (n){
        case 1:{
            printf("%s",str1);
            break;
        }
        case 2:{
            printf("2");
            break;
        }
        default:{
            printf("3");
            break;
        }
    }
}