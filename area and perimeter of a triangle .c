#include <stdio.h>
#include<math.h>
void main()
{
    float a, b, c, s, area, perimeter;

    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    perimeter = a + b + c;
    s = perimeter / 2;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of triangle = %.2f\n", area);
    printf("Perimeter of triangle = %.2f\n", perimeter);
}    