#include<stdio.h>
int main()
{
    int T,S,B,capacity;
    scanf("%d%d%d",&T,&S,&B);
    capacity=T*S*B;
    printf("%d KB",capacity);
}