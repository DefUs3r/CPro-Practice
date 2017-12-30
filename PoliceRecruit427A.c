#include<stdio.h>
int main()
{
        int n,i,crime=0,recruit=0,sum=0,unsolved=0;
        scanf("%d",&n);
        int p[n];
        for (i=0;i<n;i++)
        {scanf("%d",&p[i]);}
        
        //now we will decide what is occurence order of events
        
        for (i=0;i<n;i++)
        {
                if (p[i]=-1 && p[i+1]<0)
                {
                        crime--;
                        unsolved=crime;
                }
                else
                {
                        if p[i]>0
                        {recruit = recruit + p[i];}

                        sum=sum+recruit;
               }

                

