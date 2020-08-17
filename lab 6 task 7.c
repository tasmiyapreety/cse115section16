#include<stdio.h>
int main()
{
  double getAverage(int arr[], int size)

  int i; double avg; double sum;

  for(i=0;i<size;++i)
  {
      sum=sum+arr[i];
     avg=sum/size;
  }

  return avg;
}
