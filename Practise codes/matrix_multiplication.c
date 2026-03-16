#include<stdio.h>

int main(){
    int r1,c1,r2,c2;
    printf("Enter Rows and Column of 1st matrix: ");
    scanf("%d %d",&r1,&c1);
    int l[r1][c1];
    printf("Enter Rows and Column of 2nd matrix: ");
    scanf("%d %d",&r2,&c2);
    int m[r2][c2];
    int result[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d",&l[i][j]);
        }
        
    }
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d",&m[i][j]);
        }
        
    }
    
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j]=0;
        }
        
    }

    
    if (c1==r2)
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                for (int k = 0; k < c1; k++)
                {
                    result[i][j] += l[i][k]*m[k][j];
                }
                
            }
            
        }
        
    }
    else
    {
        printf("Multiplication not Possible");
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}