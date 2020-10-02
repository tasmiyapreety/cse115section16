#include <stdio.h>

int main()
{
    int i, times;
    printf("Times:\n");
    scanf("%d", &times);
    i=0;
    do
    {
        i++;
        printf("%d\n", i);
    }
    while(i<=times);
    return 0;
}
