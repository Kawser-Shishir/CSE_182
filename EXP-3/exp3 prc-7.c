#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D, x, y;
    printf("ax^2 + bx + c\nEnter the value of a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    D = (b * b) - (4 * a * c);

    if (D >= 0)
    {
        x = (-b + sqrt(D)) / (2 * a);
        y = (-b - sqrt(D)) / (2 * a);
        printf("Roots are %.2f and %.2f", a, b, c, x, y);
    }
    else
    {
        printf("This euation have imaginary roots");
    }

    return 0;
}
