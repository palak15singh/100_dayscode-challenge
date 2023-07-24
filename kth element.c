#include <stdio.h> 
int digit(int n,int k)
{
    int count=0;
    int  i=0,r;
    int n2;
    n2=n;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    if(k>count)
    return -1;
    else
    {
    while(n2>0)
    {
       r=n2%10;
       i++;
       if(i==k)
       {
           return r;
       }
       
       n2=n2/10;
    }
    }
}
int main() 
{ 
 int n,k;
 printf("\nENter the number");
 scanf("%d",&n);
 printf("Enter the value for kth digit");
 scanf("%d",&k);
 int r=digit(n,k);
 printf("%d",r);
 return 0; 
 } 
