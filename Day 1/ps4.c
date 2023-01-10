#include<stdio.h>
void main()
{
    int x;
    printf("Enter leap year:");
    scanf("%d",&x);
    (x%4==0&&x%100==0)||(x%400==0)?printf("Leap Year"):printf("Not leap year");
}
