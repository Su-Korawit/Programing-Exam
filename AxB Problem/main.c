#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    // input
    int a, b, ins;
    scanf("%d", &a);
    scanf("%d", &b);

    // check, process
    if (a >= 0 && a <= pow(10, 9) && b >= 0 && b <= pow(10, 9)) {
        ins = a*b;
    }

    // output
    printf("%d", ins);
}
