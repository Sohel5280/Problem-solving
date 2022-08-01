
#include<stdio.h>
int main()
{
    int mark;
    scanf("%d",&mark);

        if( mark>100 || mark<0)
            printf("The grade is invalid");

            else if ( mark>=80 && mark<=100)
            printf("The grade is : A+");

        else if( mark>=75 && mark<=79)
            printf("The grade is : A");

        else if( mark>=70 && mark<=74)
            printf("The grade is : A-");

        else if( mark>=65 && mark<=69)
            printf("The grade is : B+");

        else if( mark>=60 && mark<=64)
            printf("The grade is : B");

        else if( mark>=55 && mark<=59)
            printf("The grade is : B-");

        else if( mark>=50 && mark<=54)
            printf("The grade is : C+");

        else if( mark>=45 && mark<=49)
            printf("The grade is : C");

        else if( mark>=40 && mark<=44)
            printf("The grade is : D");

       else
            printf("The grade is : F");

       getch();

      }

