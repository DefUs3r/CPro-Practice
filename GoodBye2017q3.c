#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double max(double a,double b)
{
	if (a>b)
		return a;
	return b;
}

int main()
{
	int n,r,i,j;
	scanf("%d %d",&n,&r);
	double x[n+1];
	double y[n+1];
	for (i=0;i<n;i++)
	{
		scanf("%lf",&x[i]);
		y[i]=r;
		for (j=0;j<i;j++)
		{
			y[i]=max(y[j]+sqrt(pow((2*r),2)-pow(abs(x[j]-x[i]),2)),y[i]);
		}
	}
	for (i=0;i<n;i++)
	{
		printf("%.12lf ",y[i]);
	}
	printf("\n");
	return 0;
}
