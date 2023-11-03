#include<stdio.h>
int main()
{
    int Physics,Chemistry,Biology,Mathematics,ComputerScience,tot,per;
    scanf("%d%d%d%d%d",&Physics,&Chemistry,&Biology,&Mathematics,&ComputerScience);
    tot=Physics+Chemistry+Biology+Mathematics+ComputerScience;
    per=100*tot/500;
    if(per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80&&per<90)
    {
        printf("Grade B");
    }
    else if(per>=70&&per<80)
    {
        printf("Grade C");
    }
    else if(per>=60&&per<70)
    {
        printf("Grade D");
    }
    else if(per>=40&&per<60)
    {
        printf("Grade E");
    }
    else 
    {
        printf("Grade F");
    }
}