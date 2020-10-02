#include <stdio.h>

int main()
{ int i, j;
    for(i=1; i<=3; i++)
    {
        printf("\n");
        for(j=1; j<=10; j++)
            printf("%d * %d = %d\n", i, j, i*j);
    }
    return 0;
}
