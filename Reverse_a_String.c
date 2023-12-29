#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
int length,n,i;
scanf("%[^
]s",s);
length=strlen(s); 
n=length-1;
for(i=n;i>=0; i--)
{
printf("%c",s[i]);
}
}