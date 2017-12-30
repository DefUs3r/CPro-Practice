#include <stdio.h>
#include <math.h>
int main()
{
	int n,k=8,z=1;
	int ans;
	scanf("%d",&n);
	while(k>0)
	{
		z=((pow(2,((2*k)-1)))-pow(2,(k-1)));
		if(n%z==0)
			{ans=z;break;}
		//printf("Yes\n");
		k--;
	}
	printf("%d\n", z);
	return 0;
}