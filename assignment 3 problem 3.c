#include<stdio.h>
int main(void)
{
  int n;
  printf("Enter the size of array:\n");
  scanf("%d",&n);

  int mainarr[n],copyarray[n];
  printf("Enter the elements of array:\n");


  for(int i=0;i<n;i++)
  {
      printf("[%d]:",i);
      scanf("%d",&mainarr[i]);
  }

   for(int i=0;i<n;i++)
   {
       copyarray[n-i-1]=mainarr[i];
   }

  printf("Original array:\n");
  for(int i=0;i<n;i++)
  {
      printf("%d",mainarr[i]);
  }
  printf("Copied array:\n");
  for(int i=0;i<n;i++)
  {
      printf("%d",copyarray[i]);
  }
return 0;
}
