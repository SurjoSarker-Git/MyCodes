#include<stdio.h>
#include<math.h>

int main ()
    {
        int t,sum;
        scanf("%d",&t);

        for(int i=0;i<t;i++)
        {
            int n;
            scanf("%d",&n);
            sum=0;
            for(int j=1;j<=n;j++)
            {
                int x;
                scanf("%d",&x);
                
                if(j%2!=0)
                {
                    x=x*1;
                }

                if(j%2==0)
                {
                    x=x*(-1);
                }

                sum+=x;
            }

            printf("%d\n",sum);
        }


        
        return 0;
    }