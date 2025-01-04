#include<stdio.h>
#include<string.h>
struct student{
    char name[10];
    int percentage;
    int Roll_no;
};
int main(){
    struct student st[5];
    for(int i = 0;i<5;i++){
        scanf("%s",&st[i].name);
        scanf("%d",&st[i].Roll_no);
        scanf("%d",&st[i].percentage);
    }
    for(int i = 0;i<5;i++){
        if(st[i].percentage>37 && st[i].percentage<40) st[i].percentage+=3;
    }
    for(int i= 0;i<5;i++) printf("%s  %d  %d\n",st[i].name,st[i].Roll_no,st[i].percentage);

}