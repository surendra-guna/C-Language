#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n-(i-1) && j<=n+(i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
