#include<stdio.h>
int main()
{
  int a[7],n,i;
  printf("Enter size of the array:");
  scanf("%d",&n);
  printf("Enter the element of the array:");
  for (i=0;i<=n;i++)
  {
      scanf("%d",&a[1]);
  }
  printf("after reversing the array element are");
  for(i=n-1;i>=0;i--)
  {
      printf("");
      printf("%d",a[1]);
  }

 return 0;
}
