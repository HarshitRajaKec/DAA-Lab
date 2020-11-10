//Harshit Raja
//Roll No. - 18161110082
//Program - Matrix Chain Order

#include<stdio.h>
int MatrixChainOrder(int p[], int i, int j)
{
    if(i==j)
        return 0;
    int k, matrixCost;
    int min=9999;
    for(k=i;k<j;k++)
    {
        matrixCost = MatrixChainOrder(p,i,k)+MatrixChainOrder(p,k+1,j)+
        p[i-1]*p[k]*p[j];
        if(matrixCost<min)
            min=matrixCost;
    }
    return min;
}

int main()
{
    int arr[]={10, 100, 5, 50};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Minimum no of Scaler Multiplication is %d",
    MatrixChainOrder(arr, 1, n-1));
    getchar();
    
    return 0;
}