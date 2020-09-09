#include<stdio.h>
int main()
{
  int size1;
  printf("Enter the size of the 1st array:\n");
  scanf("%d",&size1);

  int array1[size1];
  printf("Insert the elements of the 1st array:\n");
  for(int i=0;i<size1;i++)
  {
      printf("[%d]:",i);
      scanf("%d",&array1[i]);
  }


   int size2;
   printf("Enter the size of the 2nd array:\n");
   scanf("%d",&size2);

   int array2[size2];
   printf("Insert the elements of the 2nd array:\n");
   for( i=0;i<size2;i++)
   {
       printf("[%d];",i);
       scanf("%d",&array2[i]);
   }

   int merge[size1+size2];
   for( i=0;i<size1;i++)
   {
       merge[i]=array1[i];
   }

   for( i=0;i<size2;i++)
   {
       merge[size1+i]=array2[i];
   }
  printf("Array merge:\n");
  for( i=0;i<size1+size2;i++)
  {
      printf("%d",merge[i]);
  }
   int temp;
   for( i=0;i<size1+size2;i++)
   {
       for( j+1;j<size1+size2;j++)
       {
           if(merge[j]<merge[i])
           {
               temp=merge[i];
               merge[i]=merge[j];
               merge[j]=temp;
           }
       }
   }
  printf("Ascending order:\n");
  for(i=0;i<size1+size2;i++)
  {
      printf("%d",merge[i]);
  }
return 0;
}
