#include<stdio.h>
#include<math.h>
int main()
{
 int e,f;
 double H;
 scanf("%d%d",&e,&f);
 H=hypotf(e,f);
 printf("%.2f",H);
}