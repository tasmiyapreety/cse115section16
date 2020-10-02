
#include<stdio.h>
int main()
{
  int m,n;
  printf("Enter the number of rows and columns:\n");
  scanf("%d%d",&m,&n);

  int matrix [m][n];
  int transpose[m][n];


  printf("Enter the matrix elements:\n");
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
  {
      printf("Enter the elements:",i,j);
      scanf("%d",&matrix[i][j]);
  }
 }
    printf("Enter the matrix:\n");
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
          printf("\t%d",matrix[i][j]);
      }
    printf("\n");
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            transpose[j][i]=matrix[i][j];
        }

    }

   printf("Transpose of the matrix:");
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           printf("\t%d",transpose[i][j]);
       }
        printf("\n");
   }
 return 0;
}
