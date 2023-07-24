#include<stdio.h>
void main()
{
    int n,a,sum=0,i;
    printf("enter any number");
    scanf("%d",&n);
        for(i=n;i>0;i/=10)
      {
          a=n%10;
          sum=(sum*10)+a;
          n=n/10;
      }
    printf("%d",sum);
}
