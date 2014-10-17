#include<stdio.h>
#include<math.h>
int main()
{
 int n,capital;
 double rate,deposit;   
 printf("please enter rate,year,capital:\n");
 scanf("%lf,%d,%d",&rate,&n,&capital);
 deposit=capital*pow(1+rate,n);
 printf("deposit=%lf",deposit);
 return 0;
}