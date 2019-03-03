#include <stdio.h>

#include <math.h>

#include <stdlib.h>
const double pi = 3.1416;

void net()

{
    printf("- \n");
}

void da()

{
    printf("1. circle \n \n");
}

int main()

{
    int x1, y1, x2, y2, t, u, d, q;

    float r1, r2, p1, p2, s1, s2;

    printf("Input circle1(x1 y1, r1)");

    scanf("%d %d %f", &x1, &y1, &r1);

    printf("Input circle2(x2 y2, r2)");

    scanf("%d %d %f", &x2, &y2, &r2);

    p1 = 2 * pi * r1;

    p2 = 2 * pi * r2;

    s1 = pi * r1 * r1;

    s2 = pi * r2 * r2;

    printf("1. circle(%d %d, %.3f) \n", x1, y1, r1);

    printf("perimeter = %.3f \n", p1);

    printf("area = %.3f \n", s1);

    printf("intersects: \n");

    t = x2 - x1;

    u = y2 - y1;

    t = pow(t, 2);

    u = pow(u, 2);

    d = sqrt(t + u);

    q = r1 + r2;

    if (d > q)

        net();

    else
        da();

    printf("2. circle(%d %d, %.3f) \n", x2, y2, r2);

    printf("perimeter = %.3f \n", p2);

    printf("area = %.3f \n", s2);

    printf("intersects: \n");

    if (d > q)

        net();

    else
        da();
}
