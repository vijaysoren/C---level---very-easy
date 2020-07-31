#include <stdio.h>
#include <conio.h>

int main()
{
    float english;
    float maths;
    float physics;
    float chemistry;
    float civics;
    float total;
    float percentage;

    printf("Enter marks obtained in English\n");
    scanf("%f", &english);
    printf("Enter marks obtained in Mathematics\n");
    scanf("%f", &maths);
    printf("Enter marks obtained in Physics\n");
    scanf("%f", &physics);
    printf("Enter marks obtained in Chemistry\n");
    scanf("%f", &chemistry);
    printf("Enter marks obtained in Civics\n");
    scanf("%f", &civics);

    total = english + maths + physics + chemistry + civics;
    percentage = (total/500) * 100;

    printf("Total - %f\n", total);
    printf("Percentage - %f", percentage);
    getch();
    return 0;

}