#include<stdio.h>
int maze(int cr,int cc,int dr,int dc){
    if (cr == dr && cc == dc)
    {
        return 1;
    }
    int downways = 0;
    int rightways = 0;
    if (cc == dc) // only downways
    {
        downways += maze(cr+1,cc,dr,dc);
    }
    else if (cr == dr) // only rightways
    {
        rightways += maze(cr,cc+1,dr,dc);
    }
    else
    {
        downways += maze(cr+1,cc,dr,dc);
        rightways += maze(cr,cc+1,dr,dc);
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
    int noOfWays = maze(1,1,r,c);
    printf("There are total %d number of possible ways.",noOfWays);
    return 0;
}