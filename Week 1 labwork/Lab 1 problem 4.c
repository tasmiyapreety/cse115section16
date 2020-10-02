#include<stdio.h>
int main()
{
    int x;
    printf("Number\tSquare\tCube\n");

    for(x=1; x<=5; x++)
        printf("%d\t%d\t%d\n", x, x*x, x*x*x);

    return 0;
}
