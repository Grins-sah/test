#include<stdio.h>
int main(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(int i=2;i<n;i++){
		int flag = 1;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if(flag) printf("%d is prime\n",i);
		else printf("%d not prime\n",i);
	}
	return 0;
}