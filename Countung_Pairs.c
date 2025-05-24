#include <stdio.h>
#include <string.h>

int count()
{
    int n, k;
    scanf("%d %d", &n,&k);
    char str[n+1];
    scanf("%s", str);
    int upper[26]={0};
    int lower[26]={0};

    for (int i=0;i<n;i++)
    {
        if (str[i]>='A'&&str[i]<='Z')
        {
            upper[str[i]-'A'] ++;
        }
        else
        {
            lower[str[i]-'a'] ++;
        }
    }

    int burles=0;

    for (int i=0;i<26;i++)
    {
        int p;
        if (lower[i]<upper[i])
        {
            p=lower[i];
        }
        else
        {
            p=upper[i];
        }
        burles+=p;
        lower[i]-=p;
        upper[i]-=p;

        int pair2;
        if (lower[i]>upper[i])
        {
            pair2=lower[i];
        }
        else
        {
            pair2=upper[i];
        }

        int rem;
        if ((pair2/2)<k)
        {
            rem=pair2/2;
        }
        else
        {
            rem=k;
        }
        k-=rem;
        burles+= rem;
    }

    return burles;
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i=0;i<t;i++)
    printf("%d\n",count());
    return 0;
}
