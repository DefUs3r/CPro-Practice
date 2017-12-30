#include<stdio.h>
int main()
{
        int i,j,n;
        scanf("%d",&n);
        for (i=0;i<n;i++)
        {
                for(j=n;j>i;j--)
                {
                        printf(" ");
                }
                for(j=i;j>=i;j--)
                {
                        printf("s");
                }
                printf("\n");
        }
        return 0;
}

