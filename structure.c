// WAP to enter info abt stu

#include <stdio.h>
struct student
    {
    int rollno;
    char name[10];
    }
    stu1 = {101, "Ram"};
int main()
{   
    printf("Roll no: %d\n", stu1.rollno);
    printf("Name is %s\n", stu1.name);

    struct student stu2;
    printf("Enter the 2nd student's rollno: ");
    scanf("%d", &stu2.rollno);
    printf("Student's rollno is %d\n", stu2.rollno);

    printf("Enter the 2nd student's name: ");
    scanf("%s", &stu2.name);
    printf("Student 2 name is %s\n", stu2.name);
    return 0;
}