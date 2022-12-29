#include <stdio.h>
#include <stdlib.h>

int studentDetails(void);
int printDetails(void);
int sum_Min_Max(void);

int main(void)
{
    studentDetails();
    //printDetails();

    return (0);
}

int studentDetails(void)
{
    FILE *filePointer;
    int sum = 0, max, min;
    int counter;
    

    typedef struct studentRecord // Using Typedef to create an alias name
    {
        char name[50];
        int age;
    } Student;

    filePointer = fopen("Student_Record.txt", "w");
    Student student[5];
    Student *pointer = student;

    /*Student pupil = {"Ndolo", 20};
    struct pupil *studPointer;
    studPointer = &pupil;
    printf("First student is: \n");
    printf("\nStudent_Id\t Student_Name\t Student_Age\n");
    printf("1\t \t%s\t \t%d\n", studPointer -> name, studPointer -> age);
    */

    fprintf(filePointer, "Student_Id\t Student_Name\t Student_Age\n");
    for (counter = 0; counter < 5; counter++)
    {
        printf("Enter student name and age: \n");
        scanf("%s %d", student[counter].name, &student[counter].age);
        fprintf(filePointer, "%d\t \t\t%s\t \t\t%d\n", counter, student[counter].name, student[counter].age);
    
        
    }

    max = min = pointer->age;
    for (counter = 0; counter < 5; counter++)
    {
        if (pointer->age > max)
            max = pointer->age;
        
        if (pointer->age < min)
            min = pointer->age;

        sum += pointer->age;
        pointer++;
        pointer = student;
    }

    fprintf(filePointer, "\nThe sum of age -> %d\n", sum);
    fprintf(filePointer, "The oldest student -> \n %s %d\n", pointer->name, max);
    fprintf(filePointer, "The youngest student -> \n %s %d\n", pointer->name, min);
    pointer = student;
    fclose(filePointer);
    
   return (0);
}

int printDetails(void)
{
    FILE *filePointer = NULL;
    filePointer = fopen("Student_Record.txt","r");
    char details[200];

    if (filePointer == NULL)
    {
        printf("Error opening file");
        exit (1);
    }
 
    while (!feof(filePointer))
    {
        fgets(details, 10, filePointer);
        printf("%s", details);
    }
    
    fclose(filePointer);
    return (0);
}


