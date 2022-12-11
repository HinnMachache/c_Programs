#include <stdio.h>

int studentDetails(void);

int main(void)
{
    studentDetails();

    return (0);
}

int studentDetails(void)
{
    int counter;
    
    struct studentRecord
    {
        char name[50];
        int age;
    };

    struct studentRecord student[10];
    
    for (counter = 0; counter < 10; counter++)
    {
        printf("Enter student name and age: \n");
        scanf("%s %d", student[counter].name, &student[counter].age);
    }
    printf("Student_Id\t Student_Name\t Student_Age\n");
    for (counter = 0; counter < 10; counter++)
    {
        printf("%d\t \t%s\t \t%d\n",counter, student[counter].name, student[counter].age);
    }
    

}