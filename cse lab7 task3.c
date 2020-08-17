#include<stdio.h>
int main ()
{
  int i,n,largest;
  printf("Enter the number of the array:");
  scanf("%d",&n);
  int array[n];
  printf("Enter the %d elements of array:\n",n);

  for(i=0;i<n;i++)
  {
      scanf("%d",&array[1]);
  }
  largest=array[0];

  for(i=1;i<n;i++)
  {
      if(largest<array[1])
        largest=array[1];
  }

   printf("largest element of array:%d\n",largest);
   return 0;
}
