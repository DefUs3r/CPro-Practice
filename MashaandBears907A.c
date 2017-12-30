#include <stdio.h>

int main()
{
	int arr[3],i=0,flag=0;
	for (i=0;i<3;i++)
	{
		scanf("%d",&arr[i]);
	}
	int masha;
	scanf("%d",&masha);
	int test=2*arr[2];
	if (masha<=test)
	{
		if (masha<arr[2])
		{
			flag=1;
			/*printf("log1\n");*/
		}
		else if (masha>arr[2] && masha>=arr[1] && masha<(2*arr[1]) && masha>=arr[0]  && masha<(2*arr[0])){
			arr[2]=masha;
			arr[1]=masha+1;
			arr[0]=masha+2;
		}
		
		else if (masha>arr[2] && masha>=arr[1] && masha<(2*arr[1]))
		{
			/*printf("log2\n");*/
			arr[2]=masha;
			arr[1]=masha+1;
		}
		else if (masha>arr[2]){
			/*printf("log3\n");*/
			arr[2]=masha;
		}
	}
	else{
		/*printf("log4\n");*/
		flag=1;
	}


	if (flag==1){
		printf("-1\n");
	}
	else{
		for(i=0;i<3;i++){
			printf("%d\n",arr[i] );
		}
	}
	return 0;
}