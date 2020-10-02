#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int number = n;
    int temp,sum = 0;
    while(n!=0)
    {
        temp = n%10;
        sum += temp*temp*temp;
        n/=10;
    }
    if(sum==number)
        printf("An Armstrong number!");
    else
        printf("Not an Armstrong number!");
}
