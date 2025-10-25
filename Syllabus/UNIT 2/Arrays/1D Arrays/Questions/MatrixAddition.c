#include<stdio.h>

void main(){

    int mat1[3][3],mat2[3][3],sum[3][3],i,j;


    printf("Enter Element of first Matrix\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d%d elem : -- ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Enter Element of second Matrix\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d%d elem : -- ",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j] = mat1[i][j]+mat2[i][j];
        }
    }

    printf("The sum of two matrix is\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           printf("%d ", sum[i][j] );
        }
        printf("\n");
    }

}