#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int n;

void triangle()
{
    printf("T");
    n++;
    Str();
}

void circle()
{
    printf("C");
    n++;
    Str();
}

void polygon()
{
    printf("P");
    n++;
    Str();
}

void Str()
{
    printf("%d\n", n);
    if (n == 3)
        return;
    char A[] = "triangle", B[] = "circle", C[] = "polygon", D[8], E[] = "exit";
    printf("Input String: \n");
    gets(D);
    if (strcmp(E, D) != 0) {
        if (strcmp(A, D) != 0) {
            if (strcmp(B, D) != 0) {
                if (strcmp(C, D) != 0) {
                    printf("unknown shape '%s'\n", D);
                    Str();
                } else
                    polygon();
            } else
                circle();
        } else
            triangle();
    } else
        return;
}

int main()
{
    Str();
    return 0;
}
