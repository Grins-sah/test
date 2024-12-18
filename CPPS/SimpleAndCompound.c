#include<stdio.h>
float pow(float a,float b){
    float ans=1;
    for(int i=0;i<b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
    float p,r,t,ansSIP,ansCOMP;
    printf("Enter the principal Amount : ");
    scanf("%f",&p);
    printf("Enter the rate of interest(Pre annum) : ");
    scanf("%f",&r);
    printf("Enter the Time of interest (in years) : ");
    scanf("%f",&t);
    ansSIP = p*(r/100)*t;
    ansCOMP=p*pow((1+(r/100)),t)-p;
    printf("The Simple interest is %f ...\n",ansSIP );
    printf("The Compound interest is %f ...\n",ansCOMP);
}