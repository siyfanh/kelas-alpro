#include <stdio.h>

void main()
{
    int x = 2; // true
    int y = 0; // false

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    // logika AND
    printf("x && y = %d\n", x && y);

    // logika OR
    printf("x || y = %d\n", x || y);

    // logika NOT
    printf("!x = %d\n", !x);
}
