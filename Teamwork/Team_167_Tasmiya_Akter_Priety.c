#include<stdio.h>
int main()
{
  int n1,n2,c=0,mini,maxi,s,i,a;
  printf("Input Your Two Number:");
  while(scanf("%d%d",&n1,&n2)==2)
  {
      if(n1==0&&n2==0)
        break;

      s=n1*n2;

      if(n1>n2)
      mini=n2;
      else
      mini=n1;

      a=1;
      for(i=mini;i>=1;i--)
      {
          if(s%(i*i)==0)
          {
              a=s/(i*i);
              break;
          }
      }
    printf("Your Answer is:%d%d%d\n",n1,n2,a);
  }
}
