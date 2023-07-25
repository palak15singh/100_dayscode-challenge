#include <stdio.h> 
typedef struct address
{
    int houseno;
    char street[50];
}add;
typedef struct student 
{
    int age;
    char name[50];
    add add1;
}stud;
int main()
{
    stud student1;
    printf("Enter the name ");
    scanf("%s",student1.name);
    printf("ENter age ");
    scanf("%d",&student1.age);
    printf("Enter the house no ");
    scanf("%d",&student1.add1.houseno);
    printf("Enter street ");
    scanf("%s",student1.add1.street);
    printf("%s %d %d %s",student1.name,student1.age,student1.add1.houseno,student1.add1.street);
}
