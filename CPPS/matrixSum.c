#include<stdio.h>
void col_sum(int m,int n,int mat[m][n],int* col){

	for(int i=0;i<n;i++){
		*col =0;
		for(int j=0;j<m;j++){
			(*col)+=mat[i][j];
		}
		col++;
	}
	return;
	
}
void row_sum(int m,int n,int mat[m][n],int* row){
	for(int i=0;i<m;i++){
		*row =0;
		for(int j=0;j<n;j++){
			(*row)+=mat[i][j];
		}
		row++;
	}
	return;
	
}
int main(){	
int n,m;
    printf("enter the number of row : ");
    scanf("%d",&m);
    printf("enter the number of columb : ");
    scanf("%d",&n);
    int mat[m][n];
    printf("Enter the mat1 : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);

        }
    }
	int row[m];
	int col[n];
	row_sum(m,n,mat,&row[0]);
	col_sum(m,n,mat,&col[0]);
	printf("Row");
	for(int i=0;i<m;i++){
		printf("\n%d  \n",row[i]);
	}
	printf("Column");
	for(int i=0;i<n;i++){
		printf("\n%d  \n",col[i]);
	}
	return 0;
}