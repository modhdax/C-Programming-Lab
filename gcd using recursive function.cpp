#include <stdio.h>
#include <conio.h>

int main ()
{
   int a,b,xgcd(int,int);
   printf("enter two numbers");
   scanf("%d %d",&a,&b);
   printf("%d\n",xgcd(a,b));
   printf("%d is the GCD of %d and %d.",xgcd(a,b),a,b);
}
int xgcd(int a, int b)
{
    return((a%b)?xgcd(b,a%b):b);
}


