#include<stdio.h>
int main(){
    int n,m;
    printf("enter the number of row : ");
    scanf("%d",&n);
    printf("enter the number of columb : ");
    scanf("%d",&m);
    int mat1[n][m];
    printf("Enter the mat1 : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat1[i][j]);

        }
    }
    int x,y;
    printf("enter the number of row  mat2 : ");
    scanf("%d",&x);
    printf("enter the number of columb mat2 : ");
    scanf("%d",&y);
    int mat2[x][y];
    printf("Enter the mat2 : \n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%d",&mat2[i][j]);

        }
    }
    if(m!=x){
        printf("matrix multiply not possible :");
        return 0;
    }
    int matans[n][y];
    int matAdd[n][m];
    int matSub[n][m];
    int trans[m][n];
    for(int i = 0;i<m;i++){
    	for(int j = 0;j<n;j++){
		trans[i][j]= mat1[j][i];
    	}
    }
    for(int i = 0;i<n;i++){
    	for(int j = 0;j<m;j++){
    		matAdd[i][j]=mat1[i][j]+mat2[i][j];
    		matSub[i][j]= mat1[i][j]-mat2[i][j];
    	}
    }
        for(int i = 0;i<n;i++){
    	for(int j = 0;j<m;j++){
    		matAdd[i][j]=mat1[i][j]+mat2[i][j];
    		matSub[i][j]= mat1[i][j]-mat2[i][j];
    	}
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<y;j++){
            int sum =0;
            int* ptr = &mat1[i][0];
            int*  ptr2 = &mat2[0][j];
            for(int k = 0;k<m;k++){
            		sum+=(*ptr)*(*ptr2);
            		ptr++;
            		for(int s=0;s<x;s++){
            		
            		ptr2++;
            		}
            	}
            matans[i][j]=sum;
            


        }
    }
    printf("\n");
	printf("The Multipication is : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<y;j++){
            printf("%d ",matans[i][j]);

        }
        printf("\n");
    }
     printf("\n");
	printf("The addition is : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<y;j++){
            printf("%d ",matAdd[i][j]);

        }
        printf("\n");
    }
    printf("\n");
	printf("The substraction is : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<y;j++){
            printf("%d ",matSub[i][j]);

        }
        printf("\n");
    }
    printf("\n");
	printf("The trnaspose is : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",trans[i][j]);

        }
        printf("\n");
    }

}