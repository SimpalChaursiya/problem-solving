#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=n-i;k>0;k--)
            printf(" ");
        for(j=i;j<i*2;j++)
            printf("*");
        for(j=i*2-2;j>=i;j--)
            printf("*");
        printf("\n");
    }
}
