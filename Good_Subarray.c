#include<stdio.h>
#include<stdlib.h>

int comp(const void *a,const void *b)
{
    return (*(int *)a-*(int *)b);
}

int main ()
    {
        int t,len;
        scanf("%d",&t);
        for(int i=0;i<t;i++)
        {
            int n;
            scanf("%d",&n);
            int *arr=(int *)malloc(n*sizeof(int));
            for(int i=0;i<n;i++)
            {
                scanf("%d",&arr[i]);

            }

            long long count=0;
            for(len=1;len<=n;len++)
            {
                for(int j=0;j<=n-len;j++)
                {
                    int *sarr=(int *)malloc(len*sizeof(int));
                    for(int k=0;k<len;k++)
                    {
                        sarr[k]=arr[j+k];
                    }

                    
                    qsort(sarr, len, sizeof(int), comp);

                    int median1=(len-1)/2;
                    int median2=len/2;

                    if(len%2!=0||sarr[median1]==sarr[median2])
                    {
                        count++;
                    }

                    free(sarr);

                }
            }

            printf("%lld\n",count);
            free(arr);
        }
        return 0;
    }