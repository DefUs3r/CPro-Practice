#include <stdio.h>
int n,card;
int main()
{
	scanf("%d",&n);
	if (n<=10 || n>21)
		printf("0\n");
	else
	{
		card=n-10;
		if (card<=9 || card==11)
			printf("4\n");
		else if (card==10)
			printf("15\n");
	}
	return 0;
}