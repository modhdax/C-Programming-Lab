#include <stdio.h>
#include <conio.h>

int main ()
{
   int a,b,xdigit(int);
   printf("enter a number");
   scanf("%d",&a);
   printf("%d\n",xdigit(a));
   printf("%d is the sum of digit of %d.",xdigit(a),a);
}
int xdigit(int a)
{
    return(a?(a %10+xdigit(a/10)):0);
}


