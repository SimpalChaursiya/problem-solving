#include<stdio.h>
void main()
{
    int i,j,k,n,x;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=n;k>=i;k--)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        for(x=2;x<=i;x++)
        {
            printf("%d",x);
        }
        printf("\n");
    }


}
