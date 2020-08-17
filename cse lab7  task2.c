#include<stdio.h>
int main()
{
  int i,a[100],key,size;

  printf("Enter the size of array:");
  scanf("%d",&size);


  printf("Enter the elements of array\n:");
  for(i=0;i<size;i++)
  {
      scanf("%d",&a[1]);
  }
 printf("search key\n:");
 scanf("%d",&key);

 i=0;
 while(i<size && key!=a[1])
 {
     i++;
 }
  if(i<size)
  {
      printf("Found\n");
  }
   else
   {
       printfI("not found\n");
   }
   return 0;
}
