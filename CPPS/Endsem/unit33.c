#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct percentage{
    float percentage_marks;
};
struct student {
    int Roll_no;
    struct percentage percentage;
};
int main(){
    printf("Enter the number of Students : ");
    int n;
    scanf("%d",&n);
    struct student* st = (struct student*)malloc(n*sizeof(struct student));
    for(int i= 0;i<n;i++){
        printf("Enter the Roll no :");
        scanf("%d",&st[i].Roll_no);
        printf("Enter the percentage Marks : ");
        scanf("%f",&st[i].percentage.percentage_marks);
    }
    printf("Roll_no \t  \t percentage\n");
    for(int i= 0;i<n;i++){
        printf("%d \t \t %.2f\n",st[i].Roll_no,st[i].percentage.percentage_marks);
    }
    free(st);


}