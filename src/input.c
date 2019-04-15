#include "input.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int punctcheckcr(char* a)
{
    int i;
    int p = 0;
    if (a[7] == '(') {
        for (i = 8; i < sizeof(a); i++) {
            if (a[sizeof(a) - 1] == ')') {
                if (a[i] == ',')
                    p = p + 1;
            } else
                printf("Wrong input format \n");
        }
        if (p > 2) {
            printf("Wrong input format \n");
            return 0;
        }
        // cooscheckcr(a);
    } else {
        printf("Wrong input format \n");
        return 0;
    }
    return 0;
}

/*int routetriangle(char* a)
{
    int i;
    char* b = "riangle";
    for (i = 1; i < 8; i++) {
        if (strcmp(a[i], b[i - 1]) != 0) {
            printf("Wrong input format\n");
            return 0;
        }
        //    punctchecktr(a);
    }
}
*/
int routecircle(char* a)
{
    int i;
    char* b = "ircle";
    for (i = 1; i < 6; i++) {
        if (a[i] == b[i - 1]) {
            printf("Wrong input format\n");
            return 0;
        }
        punctcheckcr(a);
    }
    return 0;
}

int FirstLetter(char* a)
{
    //  int f=0;
    if (a[0] == 't' || a[0] == 'T') {
        // f=1;
        //  routetriangle(a);
        return 1;
    }
    if (a[0] == 'c' || a[0] == 'C')
        routecircle(a);
    else
        printf("Wrong input format\n");
    return 1;
    // else return 1;
}
