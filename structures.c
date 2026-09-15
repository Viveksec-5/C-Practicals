#include <stdio.h>
#include <string.h>

typedef struct Bscit_student
{
    int rollno;
    float cgpa;
    char name[100];
    char course[100];
} IT;
int main()
{
    IT s1;

    s1.rollno = 10;
    s1.cgpa = 9.7;
    strcpy(s1.name, "Vivek Maurya");
    strcpy(s1.course, "Bsc-IT");
    printf("Enrolled course = %s\n", s1.course);

    printf("The name of student is: %s\n", s1.name);
    printf("CGPA=%.1f\n", s1.cgpa);
    printf("Roll Number = %d \n", s1.rollno);

    return 0;
}