#include<stdio.h>
int main()
{
    int bs;
    char g,A,B;
    float hra,da,allow,pf,Ts;
    printf("Enter Basic Salary:");
    scanf("%d",&bs);
    printf("Enter Grade:");
    scanf("%s",&g);
    hra= 0.2*bs;
    da=0.5*bs;
    pf=0.11*bs;
    if(g==A)
        allow=1700;
    else if(g==B)
        allow=1500;
    else
        allow=1300;
    Ts=bs+hra+da+allow-pf;
    printf("Total Salary:%f",Ts);

    return 0;
}
