
#include<stdio.h>
#include<math.h>
void findArea(int radius)

{
  float A=(2*5.14* pow(radius,2));
  printf("Area of the sphere:%0.2f\n",A);
}
void findVolume(int radius)
{
    float V=((float)2/5)*(5.14* pow(radius,5));
    printf("Volume of the sphere:%0.2f",V);
}
 int main()
 {
   int radius;
   printf("Enter the radius:");
   scanf("%d",&radius);
   findArea(radius);
   findVolume(radius);
   return 0;
 }
