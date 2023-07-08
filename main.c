#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    char address[100];
    int roll_number;
    int class;
} s[3];

int main()
{
    FILE *fp;
    fp = fopen("student.csv", "w");
    int i;

    printf("\nEnter Details of the Students\n");

    for (i = 0; i < 3; i++)
    {
        printf("\n\nEnter the name of student %d\n", i + 1);
        scanf("%s", s[i].name);

        printf("\nEnter the age of student %d\n", i + 1);
        scanf("%d", &s[i].age);

        printf("\nEnter the address of student %d\n", i + 1);
        scanf("%s", s[i].address);

        printf("\nEnter the roll number of student %d\n", i + 1);
        scanf("%d", &s[i].roll_number);

        printf("\nEnter the class of student %d\n", i + 1);
        scanf("%d", &s[i].class);

        fprintf(fp, "1. Name=%s\n2. Age=%d\n3. Address=%s\n4. Roll=%d\n5. Class=%d\n\n", s[i].name, s[i].age, s[i].address, s[i].roll_number, s[i].class);
    }

    fclose(fp);

    fp = fopen("student.csv", "r");

    printf("\n----STUDENT DETAILS----\n");
    while (fscanf(fp, "1. Name=%s\n2. Age=%d\n3. Address=%s\n4. Roll=%d\n5. Class=%d\n\n", s[i].name, &s[i].age, s[i].address, &s[i].roll_number, &s[i].class) != EOF)
    {
        printf("1. Name=%s\n2. Age=%d\n3. Address=%s\n4. Roll=%d\n5. Class=%d\n\n", s[i].name, s[i].age, s[i].address, s[i].roll_number, s[i].class);
    }
    fclose(fp);

    return 0;
}