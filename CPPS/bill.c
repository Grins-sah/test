#include<stdio.h>
int main(){
    int unit;
    scanf("%d",&unit);
    int ans=0;
    if(unit<=100){
        ans=unit*3;
    }
    else if(unit<=150){
        ans+=100*3;
        ans+=(unit-100)*4;
    }else if(unit<=250){
        ans+=100*3;
        ans+=50*4;
        ans+=(unit-150)*7;
    }
    else{
        ans+=100*3;
        ans+=50*4;
        ans+=100*7;
        ans+=(unit-250)*10;
    }
    printf("\n%d",ans);
    
}