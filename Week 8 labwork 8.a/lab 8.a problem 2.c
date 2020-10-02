
Skip to content
Pull requests
Issues
Marketplace
Explore
@tasmiyapreety
Learn Git and GitHub without any code!

Using the Hello World guide, you’ll start a branch, write comments, and open a pull request.
tamanna202 /
csee115

1
0

    0

Code
Issues
Pull requests
Actions
Projects
Wiki
Security

    Insights

csee115/Lab-8a(problems)/problem-2(lab8a).c
@tamanna202
tamanna202 lab7 and lab8 adding
Latest commit 4f58e50 on Aug 15
History
1 contributor
28 lines (24 sloc) 570 Bytes
#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter number of rows: ");
    scanf("%d",&row);
    printf("Enter number of columns: ");
    scanf("%d",&col);

    int arr[row][col];

    printf("Enter elements:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int colkey;
    printf("\nEnter which column to find sum of: ");
    scanf("%d",&colkey);

    int sum = 0;
    for(int i=0;i<row;i++){
        sum += arr[i][colkey-1];
    }
    printf("Sum of column %d: %d",colkey,sum);


return 0;
}

