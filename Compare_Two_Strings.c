#include<stdio.h>
#include<string.h>
int main()
{
char s1[10],s2[10],c;
scanf("%s
%s",&s1,&s2);
c=strcmp(s1,s2);
if (c==0)
printf("Strings are Equal");
else
printf("Strings are not Equal");
}