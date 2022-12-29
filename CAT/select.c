#include <stdio.h>

int input_Details(void);
int display_Details(int);

typedef struct Student
{
    char name[50];
    int progCode, colNo;
    char progName[50];
} student;

student stud[5];

int main()
{
    //input_Details();
    display_Details(500);
}

int input_Details(void)
{
    int counter, sum = 0, min, max;
    student *pointer = stud;

    for (counter = 0; counter < 5; counter++)
    {
        printf("Enter student details: \n");
        scanf("%s %d %d %s", pointer->name, &pointer->colNo, &pointer->progCode, pointer->progName);
        pointer++;
    }
    pointer = stud;

    for (counter = 0; counter < 5; counter++)
    {
        printf("%s %d %d %s\n", pointer->name, pointer->colNo, pointer->progCode, pointer->progName);
        pointer++;
        sum += pointer->
    }


    return (0);
}

int display_Details(int code)
{
    int i = 0, sum = 0;
    input_Details();
    printf("Students present\n");
    while (i < 5)
    {
    if (stud[i].progCode == code)
    {
        printf("%s %d %d %s\n", stud[i].name, stud[i].colNo, stud[i].progCode, stud[i].progName);
    }
    i++;
        
    }

    return (0);
}