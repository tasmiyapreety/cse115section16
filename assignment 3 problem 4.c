#include<stdio.h>
int main()
{
  int n;
  printf("Enter the size of the array:\n");
  scanf("%d",&n);

  int arr[n],flag=0;
  printf("Enter the elements of array:\n");

  for(int i=0;i<n;i++)
  {
      printf("[%d]:",i);
      scanf("%d",&arr[i]);
  }

   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;++j)
       {
           if(arr[i]==arr[j])
           {
               flag=1;
               printf("Find %d at index %d %d\n",arr[i],i,j);
           }
       }
   }

   if(flag==0)
   {
       printf("There is no duplicate elements !");
   }

  return 0;


}
