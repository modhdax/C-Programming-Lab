#include <stdio.h>
#include <conio.h>
int main ()
{
    int n,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i=1; i<=n;i++)
    {
       s+=i;
    }
    printf("Sum of first %d numbers is : %d\n",n, s);
}
