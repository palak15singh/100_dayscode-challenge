#include <stdio.h>
int a(int m , int n)
{
    if(m==0)
    return n+1;
    if(m>0 && n==0)
    return a(m-1,1);
    if (m>0 && n>0)
    return a(m-1, a(m,n-1));
}
int main() {
    int n,m;
    printf("\nEnter a number m ");
    scanf("%d",&m);
    printf("\nEnter a number n ");
    scanf("%d",&n);
    if(n<0 && m<0)
    printf("\nValues not applicable ");
    else
    printf("%d ", a(m,n));
    
    return 0;
}
