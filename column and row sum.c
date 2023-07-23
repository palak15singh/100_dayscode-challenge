#include <stdio.h>
void read(int a[20][20], int r, int c)
{
    printf("\nEnter %d elements",r*c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
}
void write(int a[20][20],int r,int c)
{
    printf("\n elements are\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
}
void row_sum(int a[20][20],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        int sum=0;
        for(j=0;j<c;j++)
        {
            sum=sum+a[i][j];
            
        }
        printf("\nSum of row %d is %d",i+1,sum);
    }
}
void column_sum(int a[20][20],int r,int c)
{
    int i,j;
    for(i=0;i<c;i++)
    {
        int sum=0;
        for(j=0;j<r;j++)
        {
            sum=sum+a[j][i];
             
        }
       printf("\nSum of column %d is %d",i+1,sum);
    }
}
int main() 
{
    int a[20][20],b[20][20],r1,r2,c1,c2;
    printf("\nEnter r1");
    scanf("%d",&r1);
    printf("\nEnter c1");
    scanf("%d",&c1);
    read(a,r1,c1);
    write(a,r1,c1);
    row_sum(a,r1,c1);
    printf("\n");
    column_sum(a,r1,c1);
    return 0;
}
