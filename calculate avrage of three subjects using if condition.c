#include<stdio.h>

int main() {
float m1,m2,m3,average ;
printf("enter the marks first subject :");
scanf("%f",&m1);
printf("enter the marks second subject :");
scanf("%f",&m2);
printf("enter the marks third subject :");
scanf("%f",&m3);
average =(m1 + m2 + m3) / 3  ;
printf("average of three subject :%f\n",average);

if(m1<35 || m2<35 || m3<35) {
printf("student is fail");
}
else if(average>=70) {
    printf("student give distinction grade");
}
else if(average>=60) {
    printf("student give first grade");
}
else if(average>=50) {
    printf("student give second grade");
}
else if(average>=35) {
    printf("student give third grade");
}
else {
    printf("student is fail");
}
return 0 ;
}
