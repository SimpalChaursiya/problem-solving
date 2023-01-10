#include<stdio.h>
void main()
{
    int t;
    printf("Enter the temperature:");
    scanf("%d",&t);
    if(t<0)
        printf("Freezing Temperature");
    else if(t>0&&t<10)
        printf("Very cold");
    else if(t>10&&t<20)
        printf("Cold");
    else if(t>20&&t<30)
        printf("Normal");
    else if(t>30&&t<40)
        printf("Hot");
    else
        printf("very Hot");
}
