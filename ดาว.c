#include<stdio.h>
int main()
{
    int i,j,a,n,m=0;
    scanf("%d",&n);
    if(n%2==0)
    {
        n--;
        m++;
        a=((n+m)/2)-1;
    }
    else
    {
        a=((n+m)/2);
    }
    for(i=0;i<(n+m)/2;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==(n/2)-i||j==(n/2)+i)
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }
        printf("\n");
    }
    for(i=0;i<=a;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==i||j==(n-1)-i)
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }
        printf("\n");
    }
    return 0;
}

