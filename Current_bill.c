#include<stdio.h>
int main()
{
 float c;
 scanf("%f",&c);
 if(c<=199)
 {
     printf("%.2f",(c*1.20)+100);
 }
 else if(c>200&&c<400)
 {
     printf("%.2f",(c*1.50)+100);
 }
 else if(c>400&&c<600)
 {
     printf("%.2f",(c*1.80)*(c*1.80)*15/100.0);
 }
 else if(c>200&&c<400)
 {
     printf("%.2f",(c*1.50)+(c*1.50)*15/100.0);
 }
 else if(c>=600)
 {
     printf("%.2f",(c*2.00)+(c*2.00)*15/100.0);
 }
}