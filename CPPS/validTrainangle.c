#include<stdio.h>
int main(){
	int A1,A2,A3;
	int flag=1;
	while(flag){
	
	printf("Enter the angles of triangle in degree (angle1 angle2 angle3) :");
	scanf("\n%d %d %d",&A1,&A2,&A3);
	if(A1<=0 ){
		while(A1<=0){

		printf("Wrong input \n");
		printf("Enter the A1 : ");
		scanf("%d",&A1);
		
		}
	}
	if(A2<=0 ){
		while(A2<=0){

		printf("Wrong input \n");
		printf("Enter the A2 : ");
		scanf("%d",&A2);
		
		}
	}
	if(A3<=0 ){
		while(A3<=0){

		printf("Wrong input \n");
		printf("Enter the A3 : ");
		scanf("%d",&A3);
		
		}
	}
	if(A1+A2+A3!=180) printf("Triangle is not valid \n");
	else printf("Triangle is valid \n ");
	printf("Enter Y to continue or N to stop :");
	char ch;
	scanf("\n %c",&ch);
	if(ch=='N') flag=0;	
	}
	return 0;
}