#include <stdio.h>
#include<ctype.h>

int main() 
{
    char str[100]="Hello world";
    int word=0,newline=0,character=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ' && isalpha(str[i+1]) )
        word++;
        character++;
        
    }
    if(character>0)
    {
        word++;
        newline++;
    }
    printf("%d %d %d",word,character,newline);
}
