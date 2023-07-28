#include <stdio.h> 

typedef struct student 
{
    int rollno;
    char name[50];
    float marks[6];
    float per;
}stud;
int main()

{
    float total;
    stud student1[2];
    for(int i=0;i<2;i++)
    {
    printf("Enter the name ");
    scanf("%s",student1[i].name);
    printf("ENter rollno ");
    scanf("%d",&student1[i].rollno);
    printf("Enter the marks ");
    for(int j=0;j<6;j++)
    {
    printf("Enter marks pf subject %d ",j+1);
    scanf("%f",&student1[i].marks[j]);
    }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<6;j++)
        {
            total=0;
            total=total+student1[i].marks[j];
        }
        student1[i].per=(total/600)*100;
    }
    for(int i=0;i<2;i++)
    {
    if(student1[i].per>=80)
    {
        printf("Name %s",student1[i].name);
    }
}
}
