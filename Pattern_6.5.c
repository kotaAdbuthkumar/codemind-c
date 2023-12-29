#include<stdio.h>
int main()
{
  int i,n,j,k;
  scanf("%d",&n);
  for(i=n;i>0;i--)
  {
    for(k=1;k<=n-i;k++)
    {
      printf(" ");
    }
    for(j=1;j<=i;j++)
    {
      printf("%c ",65+n-i);
    }
    printf("
");
  }

}