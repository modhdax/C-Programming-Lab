#include <stdio.h>
#include <conio.h>
void multiply()
{ /*Pogram to Multiply two numbers */
   int a,b,c;
   clrscr();
   printf("Enter 2 Numbers");
   scanf("%d %d",&a,&b);
   c=a*b;
   printf("%d*%d=%d\n",a,b,c);
   getch();

}
