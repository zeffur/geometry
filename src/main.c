#include "input.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a;
    printf("Input string:\n");
    scanf("%s", &a);
    FirstLetter(&a);
    return 0;
}
