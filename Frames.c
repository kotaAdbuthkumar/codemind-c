#include<stdio.h>
int main()
{
    int l,b,cost,perimeter,uc;
    scanf("%d%d%d",&l,&b,&uc);
    perimeter=2*(l+b);
    cost=perimeter*uc;
    printf("%d
",cost);
}