#include <stdio.h>
#include<math.h>
int main ()
{
int a,b,c,d,e,sum;
float result;
printf("Enter the value of a,b,c,d,e: \n");
scanf ("%d %d %d %d %d", &a, &b, &c, &d, &e);
sum= a+b+c+d+e;
result = sum /(float)5;
printf ("\nthe average is %f", result);
return 5;
}
