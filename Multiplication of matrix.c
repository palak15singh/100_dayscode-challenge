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
int mul(int a[20][20],int b[20][20], int r1, int c1,int r2,int c2)
{
    int sum,c[20][20];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            sum=0;
           for(int k=0;k<c1;k++)
           {
           sum=sum+a[i][k]*b[k][j];
           }
           c[i][j]=sum;
        }
    }
    write(c,r1,c2);
}
int main() 
{
    int a[20][20],b[20][20],r1,r2,c1,c2;
    printf("\nEnter r1");
    scanf("%d",&r1);
    printf("\nEnter c1");
    scanf("%d",&c1);
    printf("\nEnter r2");
    scanf("%d",&r2);
    printf("\nEnter c2");
    scanf("%d",&c2);
    read(a,r1,c1);
    read(b,r2,c2);
    write(a,r1,c1);
    write(b,r2,c2);
    if(c1==r2)
    {
        mul(a,b,r1,c1,r2,c2);
    }
    else
    printf("\nmultiplication not possible");
    return 0;
}
