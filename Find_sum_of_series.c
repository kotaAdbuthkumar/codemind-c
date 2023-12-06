#include<stdio.h>
int main()
{
    int n;
    float i,b,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        b=1/i;
        sum=sum+b;
    }
    printf("%.2f",sum);
}