#include<stdio.h>

int main(){
int a,b,c ;

printf("enter first number :");
scanf("%d",&a);

printf("enter second number :");
scanf("%d",&b);

printf("enter third number :");
scanf("%d",&c);

if(a>b && a>c) {
printf("largest number is %d\n",a);
}
else if(b>a && b>c ) {
printf("largest number is %d\n",b);
}
else {
printf("largest number is %d\n",c);
}
if(a<b && a<c) {
printf("smallest number is %d\n",a);
}
else if(b<a && b<c) {
printf("smallest number is %d\n",b);
}
else {
printf("smallest number is %d\n",c);
}

return 0;
}
