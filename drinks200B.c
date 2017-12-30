#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int j=n;
	double arr[n],sum=0;
	while (j>0)
	{
		scanf("%lf",&arr[n-j]);
		sum=sum+arr[n-j];
		j--;
	}
	double ans=sum/n;
	printf("%0.12lf\n",ans);
	return 0;
}