#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student {
    char name[50];
    int Roll_no;
    float percentage;
};
int main(){
    printf("Enter the number of Students : ");
    int n;
    scanf("%d",&n);
    struct student* st = (struct student*)malloc(n*sizeof(struct student));
    for(int i= 0;i<n;i++){
        printf("Enter the Roll no :");
        scanf("%d",&st[i].Roll_no);
        printf("Enter the Name : ");
        scanf("\n%[^\n]",&st[i].name);
        printf("Enter the percentage Marks : ");
        scanf("%f",&st[i].percentage);
    }
    printf("Roll_no \t  name \t \t percentage\n");
    for(int i= 0;i<n;i++){
        printf("%d \t \t %s \t \t %.2f\n",st[i].Roll_no,st[i].name,st[i].percentage);
    }
    free(st);


}