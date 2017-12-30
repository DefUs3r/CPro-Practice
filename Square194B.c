#include <stdio.h>
int lcm(int n1,int n2)
{
	int minMultiple;
	minMultiple = (n1>n2) ? n1 : n2;
	while(1)
    {
        if( minMultiple%n1==0 && minMultiple%n2==0 )
        {
            return minMultiple;
        }
        ++minMultiple;
    }
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t>0)
	{
		long long s;
		scanf("%lld",&s);
		
		t--;
	}
	return 0;
}