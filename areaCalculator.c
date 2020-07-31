#include <stdio.h>
#include <conio.h>

int main()
{
    float length;
    float breadth;
    float radius;
    float areaOfRectangle;
    float areaOfCircle;
    float perimeterOfRectangle;
    float circumferenceOfCircle;

    printf("Enter length of Rectangel\n");
    scanf("%f", &length);
    printf("Enter breadth of rectangle\n");
    scanf("%f", &breadth);

    printf("Enter radius of circle\n");
    scanf("%f", &radius);

    areaOfRectangle = length * breadth;
    perimeterOfRectangle = 2 * (length + breadth); // perimeter of a rectangel = 2(l+b)
    areaOfCircle = (22/7) * radius * radius; // area of a circle = pie.rSquare
    circumferenceOfCircle = 2 * (22/7) * radius; // circumference of a circle = 2pieR

    printf("Area of Rectangel = %f\n", areaOfRectangle);
    printf("Perimeter of rectangel = %f\n", perimeterOfRectangle);
    printf("Area of Circle = %f\n", areaOfCircle);
    printf("Circumference of the circle = %f\n", circumferenceOfCircle);
    getch();
    return 0;
}