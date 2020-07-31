#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c, d, e, s;
    printf("Enter a five digit number\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    s = a + b + c + d + e;

    printf("Sum of digits = %d", s);
    getch();
    return 0;
}