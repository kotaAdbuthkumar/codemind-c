#include<stdio.h>
int main()
{
    float x,y;
    scanf("%f%f",&x,&y);
    float  p=x-y;
    float f=p/x;
    printf("%.2f",f*100);
}