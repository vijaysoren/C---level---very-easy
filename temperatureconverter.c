#include <stdio.h>
#include <conio.h>

int main()
{
    float tempF;
    float tempC;

    printf("Enter temperature in Farenheit\n");
    scanf("%f", &tempF);

    tempC = (tempF - 32) * 5/9; // Formula - (32F - 32) x 5/9 = 0, 32 degrees = 0 degrees celcius
    printf("Temperature in Centigrade : %f degrees", tempC);
    getch();
    return 0;

}