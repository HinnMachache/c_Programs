#include <stdio.h>

char studentRank ();

int main ()
{

    studentRank();
    return 0;
}

 char studentRank ()
{
    char studentName[15];
    int marks;
    char grade;

    printf("Input student name: ");
    scanf("%s", &studentName);
    printf("Input student marks: ");
    scanf("%d", &marks);

    switch (marks/10)
    {
        case 10:
        case 9:
        case 8:
        case 7:
       grade = 'A';
       printf("\nHello %s ,Your score is: %d, Your grade is: %c",studentName , marks, grade);
        break;

        case  6 :
       grade = 'B';
       printf("\nHello %s , Your score is: %d, Your grade is: %c",studentName , marks, grade);
        break;

          case 5 :
       grade = 'C';
       printf("\nHello %s ,Your score is: %d, Your grade is: %c",studentName, marks, grade);
        break;

          case 4 :
       grade = 'D';
       printf("\nHello %s ,Your score is: %d, Your grade is: %c", studentName, marks, grade);
        break;

          case 3 :
           case 2:
            case 1 :
            case 0:
       printf("\nHello %s you've failled!!", studentName);
        break;

        default:
       printf("\nPlease enter  valid marks , %s!!",studentName);
        break;


    }

    return grade ;
}
