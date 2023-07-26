#include <stdio.h>
int stringlen(char *);
void strcopy(char *, char *);
void stringrev(char *,int len);
int palindrome(char * ,char *);
int main()
{
   char data[30],cpy[30];
   printf("\nEnter the string ");
   scanf("%[^\n]s",data);
   int len=stringlen(data);
   strcopy(cpy,data);
   stringrev(data,len);
   int flag=palindrome(cpy,data);
   if(flag==0)
   {
       printf("\nIt is a palindrome");
       
   }
   else
   printf("\nIt is not a palindrome");
   
    return 0;
}
int stringlen(char *data)
{
    int len=0;
    while(*data!='\0')
    {
        data++;
        len++;
    }
    return len;
}
void strcopy(char *destination, char *source)
{
    while(*source!='\0')
    {
     *destination=*source;
     source++;
     destination++;
}
*destination='\0';
}
void stringrev(char *str1,int len)
{
    int temp;
    for(int i=0;i<len/2;i++)
    {
        temp=str1[i];
        str1[i]=str1[len-i-1];
        str1[len-i-1]=temp;
        
    }
}
int palindrome(char *str1 ,char *str2)
{
    int flag=0,i=0;
    while(str1[i]!='\0' && str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
    return 0;
    else
    return 1;
}
