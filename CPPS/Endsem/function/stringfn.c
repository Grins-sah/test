#include<stdio.h>
#include<string.h>
int fn(char str[]){
    int count = 0;
    int i = 0;
    while(str[i]!='\0') {
        printf("%c",str[i]);
        count++;
        i++;
    }
    printf("\n");
    printf("the length is by g fn is %d\n",count);
    return count;
}
int main(){ 
    // int n;
    // printf("Enter the number of charecter in input : ");
    // scanf("%d",&n);
    char str[1000];
    printf("Enter the string : ");
    scanf("%[^\n]",str);
    printf("The length of given string is %d \n",strlen(str));
    int lenFng = fn(str);
    if(lenFng==strlen(str)) printf("True");
    else printf("false");
    



}