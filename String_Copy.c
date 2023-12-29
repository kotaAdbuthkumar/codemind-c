#include<stdio.h>
#include<string.h>
int main()
{
char s1[50],s2[50];
scanf("%[^
]s",s1);
strcpy(s2,s1);
printf("%s",s2);
}