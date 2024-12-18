#include<stdio.h>
int main()
{
	char ch[100];
	int blanks = 0, tabs = 0, newlines = 0;
	printf("Enter text (end input with `.`) : \n");
	int i=0;
	scanf("%c",&ch[0]);
	i++;
	while ((ch[i-1]) != '.')
	{
		scanf("%c",&ch[i]);
		if(ch[i]==' ') blanks++;
		else if(ch[i]=='\n') newlines++;
		else if(ch[i]=='\t') tabs++;	
		i++;
	}
	printf("\nCount of blanks: %d\n", blanks);
	printf("Count of tabs: %d\n", tabs);
	printf("Count of newlines: %d\n", newlines);
	return 0;
}