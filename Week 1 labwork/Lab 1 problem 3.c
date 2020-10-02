#include<stdio.h>
int main()
{
int n,row,col;
n=5;
for(row=1;row<=n;row++)
{
for(col=1;col<=row;col++)
{
printf("*  ");

}
printf("\n");
}
}
