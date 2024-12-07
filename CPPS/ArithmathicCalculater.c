#include<stdio.h>

int main(){
    int n=-2;
    while(n!=-1){
        printf("Enter 0 for Addition \nEnter 1 for Subtraction \nEnter 2 for Division \nEnter 3 for multiplication \nEnter 4 for Modulus\nEnter -1 for exit \nEnter The Chioce :");
        scanf("%d",&n);
        if(n==-1) break;
        else{
            printf("Enter the two values <a b> : ");
            int a,b;
            scanf("%d %d",&a,&b);
            if(n==0){
                printf("The Result is %d ...\n",a+b);
            }
            else if(n==1){
                printf("The Result is %d ...\n",a+b);
            }
            else if(n==2){
                if(b!=0){
                    printf("The Result is %d ...\n",a/b);
                }
                else{
                    printf("b cannot be Zero ...\n");
                }
            }
            else if(n==3){
                printf("The Result is %d ...\n",a*b);
            }
            else{
                printf("The Result is %d ...\n",a%b);
            }
        }

    }

}