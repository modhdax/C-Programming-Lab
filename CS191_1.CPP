#include <stdio.h>
#include <conio.h>
void sum()
{ /* program to add Nos.*/
  int a,b,c;
  clrscr();
  printf("Enter 2 Nos.");
  scanf("%d %d",&a,&b);
  c=a+b;
  printf("%d+%d=%d\n",a,b,c);
  getch();
}
