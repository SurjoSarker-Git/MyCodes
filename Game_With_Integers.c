#include<stdio.h>


int main ()
    {
        int t;
        scanf("%d",&t);

        for(int i=0;i<t;i++)
        {
            int n,x,y,z;
            scanf("%d",&n);
            x=n%3;
            y=(n+1)%3;
            z=(n-1)%3;

            int moves=0;

            if(x==0)
            printf("Second\n");


            if(x!=0&&y==0&&z!=0)
            printf("First\n");

            if(x!=0&&y!=0&&z==0)
            printf("First\n");

        }

        return 0;
    }