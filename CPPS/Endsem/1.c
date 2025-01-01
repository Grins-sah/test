#include<stdio.h>
#include<string.h>
int main(){
    char str1[500]="Hello ";
    char str2[]="Grins";
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}