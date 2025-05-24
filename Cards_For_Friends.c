#include<stdio.h>


int main ()
    {
        int t;
        scanf("%d",&t);
        for(int i=0;i<t;i++)
        {
            int w,h,n;
            scanf("%d %d %d",&w,&h,&n);
            
            int paper=1;
            while (w%2==0)
            {
                w/=2;
                paper*=2;
            }
            while (h%2==0)
            {
                h/=2;
                paper*=2;
            }

           if(paper>=n)
           printf("YES\n");

           if(paper<n)
           printf("NO\n");

            
           

           
        }
        return 0;
    }