#include<stdio.h>

int gcd(int a, int b)
{
    while (a!=0)
    {
        int temp=a;
        a=b%a;
        b=temp;
    }

    return b;
}
int main ()
    {
        int t;
        scanf("%d",&t);

        for(int i=0;i<t;i++)
        {
            long long int a,b;
            long long int x;
            scanf("%lld %lld",&a,&b);

            int j;
            if(b>a)
            {

                if(a==1)
                {
                    x=b*b;
                }

                else 
                {
                    x=(a*b)/gcd(a,b);
                }
            }
            

            if(x==b)
            {
                for(j=2;j<=a;j++)
                {
                    if(a%j==0||b%j==0)
                    {
                        x=x*j;
                        break;
                    }
                }
            }
            printf("%lld\n",x);

        }
        return 0;
    }