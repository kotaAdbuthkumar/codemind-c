#include<stdio.h>
int main()
{
    int i,n,a,m;
    scanf("%d%d%d",&n,&a,&m);
    for(i=a;i<=m;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}
