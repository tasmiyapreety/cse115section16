
#include<stdio.h>
int main()
{
  int rows,columns,i,j;
  printf("Enter the rows of the array:\n");
  scanf("%d",&rows);
  printf("Enter the columns of the array:\n");
  scanf("%d",&columns);

  int arr[rows][columns];
  printf("Enter the elements of the array:\n");
  for(i=0;i<rows;i++)
  {
      for(j=0;j<columns;j++)
      {
          printf("A [%d][%d]",i,j);
          scanf("%d",&arr[i][j]);
      }
  }

   printf("The matrix:\n");
   for(i=0;i<rows;i++)
   {
       for(j=0;j<columns;j++)
       {
           printf("\t%d",arr[i][j]);
       }
   printf("\n");

   }

   int transArr[columns][rows];
   for(i=0;i<rows;i++)
   {
       for(j=0;j<columns;j++)
       {
           transArr[j][i]=arr[i][j];
       }
  printf("\n");

 }

 return 0;

}

