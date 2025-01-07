#include<stdio.h>
#include<string.h>
void display(char* str){
        printf("%s",str);
        return;
}
int main(){
        char str[]="Hello my name is grins";
        display(str);
        return 0;
}