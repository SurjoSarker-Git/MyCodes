#include <stdio.h>
#include <string.h>

int main()
{
    int n,t,k,p;
    char str[690005];

    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        scanf("%d", &n);
        scanf("%s", str);

        k=0;
        if ((str[0]-48)!=1)
        {
            p=11;
        }
        else
        {
            p=9;
        }

        for (int i=n-1;i>=0;i--)
        {
            if (p==9)
            {
                str[i]=(p-(str[i]-48))+48;
            }
            else
            {
                if (str[i]-48>1||(str[i]-48==1&&k==1))
                {
                    str[i]=(p-(str[i]+k-48))+48;
                    k=1;
                }
                else
                {
                    str[i]=1-(str[i]+k-48)+48;
                    k=0;
                }
            }
        }
        printf("%s\n", str);
    }
    return 0;
}
