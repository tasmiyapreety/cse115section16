#include<stdio.h>
int main()
{
  int num,sum;
  printf("Enter the length of array:");
  scanf("%d",&num);
  int a[num];
  for(int i=0;i<num;i++)
  {
      scanf("%d",&a[i]);
  }

  for(int i=0;i<num;i++)
  {
      sum=sum+a[i];
  }
    printf("the sum is %d\n",sum);
    return 0;

}
