#include <stdio.h>
void strcate(char *,char *);

int main()
{
   char data[30],cpy[30],str2[30];
   printf("\nEnter the string ");
   gets(data);
   printf("\nEnter the string ");
   gets(str2);
strcate(data,str2);
    printf("\nString after concatenation is %s",data);
}
void strcate(char *destination,char *source)
{
    while(*destination!='\0')
    {
        destination++;   
    }
    *destination=' ';
    destination++;
    while(*source!='\0')
    {
        *destination=*source;
        destination++;
        source++;
    }
    *destination='\0';
  
}
