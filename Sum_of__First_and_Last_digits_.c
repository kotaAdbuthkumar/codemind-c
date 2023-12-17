#include<stdio.h>
int main()
{
    int n,sum=0,firstnum,lastnum;
    scanf("%d",&n);
    lastnum=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    firstnum=n;
    sum=firstnum+lastnum;
    printf("%d",sum);
}