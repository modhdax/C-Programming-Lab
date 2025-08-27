#include<stdio.h>

int main(){
int a,b ;
printf("enter first number :");
scanf("%d",&a);
printf("enter second number :");
scanf("%d",&b);

if(a>b) {
printf("largest number is %d\n",a );
printf("smallest number is %d\n",b );
}
else {
printf("largest number is %d\n",b);
printf("smallest number is %d\n",a);
}
return 0;
}
