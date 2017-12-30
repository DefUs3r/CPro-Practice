#include<stdio.h>
int main()
{
	double t,i,j;
	double ans=1,num=1,denom=1;
	scanf("%lf",&t);
	while(t>0)
	{
		double r,g;
		scanf("%lf %lf",&r,&g);
		for (i=0;i<r;i++)
		{
			for(j=0;j<=i;j++)
			{
				num=(num*(r-j)*g*1.0);
				denom=(denom*(r+g-j)*1.0);
				printf("Yes\n");
			}
			ans=(ans/(r+g-i)*1.0);
		}
		ans=(ans*num/denom)*1.0;
		printf("%0.6lf\n",ans);
		t--;
	}
	return 0;
}
