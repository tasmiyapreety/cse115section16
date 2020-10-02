#include<stdio.h>
int main()
{
  int i,A[100],size,key;
  printf("Enter the size of array\n:");
  scanf("%d",&size);
  printf("Enter the elements of array\n:");
  for(int i=0; i<size; i++)
  {
         scanf("%d",&A[i]);
    }

    printf("Search key:\n");
    scanf("%d",key);
      i=0;
      while(i<size && key !=A[i])
    {
      i++;
      }
      if(i<size)
    {
           printf("found\n");
        }
       else
     {
    printf("not found\n");
    }
return 0;
}
