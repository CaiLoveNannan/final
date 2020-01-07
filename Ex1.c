#include<stdio.h>
main(){
    double c;
    double z;
    double y;
    printf("please input two numbers(divided by space)\n");
    scanf("%lf %lf",&c,&z);
    y=(c+z)*(c+z);
    printf("%.2lf\n",y);
}