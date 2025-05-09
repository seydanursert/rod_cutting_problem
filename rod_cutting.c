#include <stdio.h>

int max(int x,int y){
    return (x>y) ? x : y;
}

int main(){

    int A[100][100];
    int sizes[4]={1,2,3,4};
    int len_sizes=4;
    int prices[4]={2,5,9,6};
    int i,j,length=5;

    for(i=0;i<=len_sizes;i++){
        A[i][0]=0;
    }

    for(i=0;i<=len_sizes;i++){
        for(j=1;j<=length;j++){
            if (sizes[i]>j){
                A[i][j]=A[i-1][j];
            }
            else
            {
                A[i][j] = max(A[i-1][j],prices[i]+A[i][j-sizes[i]]);
            }
            
        }
    }

    for ( i = 0; i <=len_sizes; i++)
    {
        for(j=0;j<=length;j++){
            printf("%d  ",A[i][j]);
        }
        printf("\n");

    }
    printf("Max benefit is %d",A[len_sizes][length]);
    





    return 0;
}