#include<stdio.h>

int main() {
float gross,allwances,deductions,net ;
printf("enter the value of gross :");
scanf("%f",&gross);
 if(gross>10000) {
allwances = (gross * 0.10) ;
deductions = (gross * 0.03) ;
printf(" value of allwances : %f\n",allwances);
printf(" value of deductions :%f\n",deductions );
}
else if(gross>5000) {
allwances = (gross * 0.07) ;
deductions = (gross * 0.02)  ;
printf(" value of allwances : %f\n",allwances);
printf(" value of deductions :%f\n",deductions );
}

net = (gross + allwances - deductions) ;
printf("value of net salary : %f\n", net) ;
return 0 ;
}
