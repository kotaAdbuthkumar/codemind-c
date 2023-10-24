#include<stdio.h>
int main()
{
    int X,tot;
    scanf("%d",&X);
    tot=X+X+X+X;
    if(tot<=1000)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
}