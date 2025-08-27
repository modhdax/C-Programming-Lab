#include<stdio.h>

int main() {
float gross,discount,net ;
printf("enter the value of gross :");
scanf("%f",&gross);
 if(gross>20000) {
discount = (gross * 0.15) ;
printf(" value of discount : %f\n",discount);
}
else if(gross>10000) {
discount = (gross * 0.10) ;
printf(" value of discount : %f\n",discount);
}
else {
discount = (gross * 0.05) ;
printf(" value of discount : %f\n",discount);
}
net = (gross - discount) ;
printf("value of net salary : %f\n", net) ;
return 0 ;
}
