#include<stdio.h>
#include<string.h>
struct student{
	int roll_no;
	char Name[10];
	int marks1;
	int marks2;
	char grade;
};
int main(){
	int n;
	printf("Enter the number of input : ");
	scanf("%d",&n);
	struct student st[n];
	for(int i=0;i<n;i++){
		printf("Enter the roll no : ");
		scanf("%d",&st[i].roll_no);
				printf("Enter the Name : ");
			scanf("%s",&st[i].Name);
		printf("Enter the marks 1 : ");
		scanf("  %d",&st[i].marks1);
		printf("Enter the marks 2 : ");
		scanf(" %d",&st[i].marks2);
		int temp = ((st[i].marks1+st[i].marks2)/200.0)*100;
		if(temp>90) st[i].grade='A';
		else if(temp>80) st[i].grade='B';
		else if(temp>70) st[i].grade='C';
		else if(temp>50) st[i].grade='D';
		else st[i].grade='F';
		


	}
	printf(" Roll_no\tName\tmarks1\tmarks2\tgrade \n");
	for(int i=0;i<n;i++){
		printf(" %d\t\t%s\t%d\t%d\t%c \n",st[i].roll_no,st[i].Name,st[i].marks1,st[i].marks2,st[i].grade);
	}
	return 0;
}
