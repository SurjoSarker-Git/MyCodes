#include<stdio.h>


int main ()
    {
        int t;
        scanf("%d",&t);

        for(int i=0;i<t;i++)
        {
            int n;
            scanf("%d",&n);


            char str1[n+1],str2[n+1],str3[n+1];
            scanf("%s\n%s\n%s",str1,str2,str3);
            int count=0;

            for(int i=0;i<n;i++)
            {
                

                if(str1[i]!=str3[i]&&str2[i]!=str3[i])
                {
                    count=1;
                    break;
                }
            }

            if(count==1)
            printf("YES\n");
            else
            printf("NO\n");
        }
        return 0;
    }