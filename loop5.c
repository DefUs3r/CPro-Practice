#include<stdio.h>
int main()
{
        int i,j,n;
        scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if (i==1)
		{
			for (j=0;j<=n;j++)
			{
                        	printf("a");
				printf("\n");

                	}
		
			
		}
        	if(i==n)
		{
			for(j=0;j<=n;j++)
			{
				printf("a");
				
			}
	
        	}
	        for(i=2;i<=n-1;i++)
		{
			for(j=1;j<i;j++)
			{
				printf(" ");
			}
			for(j=0,n;j<=i;j++)
			{
				printf("s");
			}
		}
		
                printf("\n");
	}
	
        return 0;
}

