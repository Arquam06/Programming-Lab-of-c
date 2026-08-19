//A college wants to maintain the academic records of its students using a C program. Each student record should contain the roll number, name, and marks obtained by the student. The college has a class of five students. Define a structure named student and create an array of structures to store the details of five students. Write a C program to: Accept the roll number, name, and marks of five students.  Display all student records in tabular form.  Calculate and display the average marks of the five students.  Identify and display the student who has obtained the highest marks.


#include <stdio.h>

struct student
{
    int rollno;
    char name[50];
    float marks;
};

int main()
{
    struct student s[5];

    int i, highest = 0;
    float sum = 0, average;

    printf("Enter details of 5 students:\n\n");

    for(i = 0; i < 5; i++)
    {
        printf("Enter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollno);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");

        sum = sum + s[i].marks;
    }

    average = sum / 5;

    for(i = 1; i < 5; i++)
    {
        if(s[i].marks > s[highest].marks)
        {
            highest = i;
        }
    }

    printf("\n------------ Student Records ------------\n");

    printf("%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");

    for(i = 0; i < 5; i++)
    {
        printf("%-10d %-20s %-10.2f\n",
               s[i].rollno,
               s[i].name,
               s[i].marks);
    }

    printf("\nAverage Marks = %.2f\n", average);

    printf("\n----- Student with Highest Marks -----\n");

    printf("Roll Number : %d\n", s[highest].rollno);
    printf("Name        : %s\n", s[highest].name);
    printf("Marks       : %.2f\n", s[highest].marks);

    return 0;
}