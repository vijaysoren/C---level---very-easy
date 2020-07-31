#include <stdio.h>
#include <conio.h>

int main()
{
    float distanceInKM;
    float distanceInMeters;
    float distanceInFeet;
    float distanceInInches;
    float distanceIncentimeters;

    printf("Enter a distance between two cities in KM\n");
    scanf("%f", &distanceInKM);

    distanceInMeters = distanceInKM * 1000;
    distanceInFeet = ( distanceInKM * 1000) / 0.3048; // 1 feet  = 0.3048 m
    distanceInInches = (distanceInKM * 1000) * 39.3701; // 1 m = 39.3701 inches
    distanceIncentimeters = distanceInKM * 1000 * 100; // 100 centimeters = 1 m

    printf("Distance in KM - %f\n", distanceInKM);
    printf("Distance in meters - %f\n", distanceInMeters);
    printf("Distance in Feet - %f\n", distanceInFeet);
    printf("Distance inInches - %f\n", distanceInInches);
    printf("Distance in Centimeters - %f\n", distanceIncentimeters);

    getch();
    return 0;
}