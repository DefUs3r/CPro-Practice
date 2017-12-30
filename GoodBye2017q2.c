#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//global declarations
int n,m,count=0,starti,startj,i=0,j=0;
char arr[55][55],command[105];

int dirperm(int left, int right,int up,int down); //checker (bool response)

int main()
{
	int i,j;
	scanf("%d %d",&n,&m);
	for (i=0;i<n;i++)
	{
			scanf("%s",arr[i]);
			//printf("%d %d=> %c",i,j,arr[i][j] );
			for (j=0;j<strlen(arr[i]);j++)
			{
				if (arr[i][j]=='S')
				{
					starti=i;
					startj=j;
				}
			}
	}
	scanf("%s",command);
	if (dirperm(0,1,2,3))
		count++;
	if (dirperm(0,1,3,2))
		count++;
	if (dirperm(0,2,1,3))
		count++;
	if (dirperm(0,2,3,1))
		count++;
	if (dirperm(0,3,1,2))
		count++;
	if (dirperm(0,3,2,1))
		count++;
	if (dirperm(1,2,3,0))
		count++;
	if (dirperm(1,2,0,3))
		count++;
	if (dirperm(1,3,0,2))
		count++;
	if (dirperm(1,3,2,0))
		count++;
	if (dirperm(1,0,2,3))
		count++;
	if (dirperm(1,0,3,2))
		count++;
	if (dirperm(2,0,1,3))
		count++;
	if (dirperm(2,0,3,1))
		count++;
	if (dirperm(2,1,0,3))
		count++;
	if (dirperm(2,1,3,0))
		count++;
	if (dirperm(2,3,0,1))
		count++;
	if (dirperm(2,3,1,0))
		count++;
	if (dirperm(3,0,1,2))
		count++;
	if (dirperm(3,0,2,1))
		count++;
	if (dirperm(3,1,0,2))
		count++;
	if (dirperm(3,1,2,0))
		count++;
	if (dirperm(3,2,0,1))
		count++;
	if (dirperm(3,2,1,0))
		count++;
	printf("%d\n",count);
	return 0;
}
int dirperm(int left, int right,int up,int down)
{
	int curri=starti,currj=startj; //start from start
	for (i=0;i<strlen(command);i++)
	{
		//printf("%d %d\n",curri,currj );

		if ((command[i]-'0')==left)
			currj--;
		if ((command[i]-'0')==right)
			currj++;
		if ((command[i]-'0')==up)
			curri--;
		if ((command[i]-'0')==down)
			curri++;
		if (arr[curri][currj]=='E')
			return 1; //true if hit exit. Stop and inc. count
		if (arr[curri][currj]=='#')
			return 0; //false if hit obstacle
		if (curri<0||curri>=n||currj<0||currj>=m)
			return 0; //false if out of bounds
		//debug
		//printf("Logged into dirperm func\n");
	}
	return 0; //if above if_conditions fail
}