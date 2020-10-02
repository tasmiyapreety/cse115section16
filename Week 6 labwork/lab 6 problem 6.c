
#include<stdio.h>
double getAverage(int arr[],int size);
int main()
{
  int balance[5] ={100,1,3,15,50};
  double avg;

  avg=getAverage(balance, 5);
  printf("Average value:%f\n",avg);

  return 0;



}
