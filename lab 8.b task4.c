#include<stdio.h>
void printStarPyramid(int lines);
int main()
{
    int lines;
    printf("Enter lines:");
    scanf("%d",&lines);

    printStarPyramid(lines);
    return 0;
}
void printStarPyramid(int lines)
{
    int i,j;
    for(i=0;i<=lines;i++)
    {
        for(j=1;j<=lines-i;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }
return 0;
}
