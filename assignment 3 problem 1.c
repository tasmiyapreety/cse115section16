#include<stdio.h>
int main(void)
{
   int n;
   printf("Enter the size of array:");
   scanf("%d",&n);

   int arr[n];
   printf("enter the elements of array:\n");


   for(int i=0;i<n;i++)
   {
       printf("[%d]:",i);
       scanf("%d",&arr[i]);
   }

        printf("Even numbers:");
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                printf("%d",arr[i]);
            }
        }



        printf("Odd numbers:");
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                printf("%d",arr[i]);
            }


        }

   return 0;
}
