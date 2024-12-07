#include<stdio.h>
int main(){
    int n,m;
    printf("enter the number of row : ");
    scanf("%d",&n);
    printf("enter the number of column : ");
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
    for(int i=0;i<n;i++){
        for(int j=0;j<y;j++){
            int sum =0;
            for(int k=0;k<m;k++){
                sum+=mat1[i][k]*mat2[k][j];
            }
            matans[i][j]=sum;
            


        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<y;j++){
            printf("%d ",matans[i][j]);

        }
        printf("\n");
    }


}