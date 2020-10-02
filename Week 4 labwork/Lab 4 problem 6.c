#include <stdio.h>

int main()
{
    int i, times;
    printf("Times:\n");
    scanf("%d", &times);
    i=times;
    while(i>=0)
        {
            i--;
            printf("%d\n", i);
        }
    return 0;

}
