#include <conio.h>
#include <stdio.h>
#include <string.h>

int main ()
{
   char X[10], d[20];
    printf("Enter Your Name:\n");
    gets(X);
   int i=0;
    (X[i]>='A' && X[i]<='Z')?X[i]+=32:
    (X[i]>='a' && X[i]<='z')?X[i]-=32:i;;
    printf

    int P=0;
    while(X[P] !='\0')
    printf("%c\n",X[P++]);
    printf("\n%d is the length of your string.\n",strlen(X));
    strlwr(X);
    printf("%s is your lower case name.\n", X);
    strupr(X);
     printf("%s is your upper case name.\n", X);
     strrev(X);
    printf("%s is your reverse name.\n",X);























}
