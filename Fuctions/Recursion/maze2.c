#include<stdio.h>
int maze(int dr,int dc){
    if (dr==1 && dc ==1)
    {
        return 1;
    }
    int downways = 0;
    int rightways = 0;
    if (dc ==1) // only downways
    {
        downways += maze(dr-1,dc);
    }
    else if (dr == 1) // only rightways
    {
        rightways += maze(dr,dc-1);
    }
    else
    {
        downways += maze(dr-1,dc);
        rightways += maze(dr,dc-1);
    }
    int totalways = downways + rightways;
    return totalways;
}
int main(){
    int r,c;
    printf("Enter Number of rows: ");
    scanf("%d",&r);
    printf("Enter Number of columns: ");
    scanf("%d",&c);
    int noOfWays = maze(r,c);
    printf("There are total %d number of possible ways.",noOfWays);
    return 0;
}