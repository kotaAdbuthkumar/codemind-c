#include<stdio.h>
int main()
{
    float a,b,h,area;
    scanf("%f%f%f",&a,&b,&h);
    area=((a+b)/2)*h;
    printf("%.4f",area);
}