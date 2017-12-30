#include<stdio.h>
int main()
{
	int n;scanf("%d",&n);
	char arr[n+1],ch;
	int i=0;
	while (ch != '\n') //terminates if we hit enter
	{
		ch=getchar();
		arr[i++]=ch;
	}
	arr[i]='\0';//inserts null char at end
	printf("Input=%s",arr);
	return 0;
}
