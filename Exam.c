#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
    {
		int a,b;
		scanf("%d %d",&a,&b);
		if(a==0 && b%2==0) 
        printf("YES\n");
		if(a!=0 && a%2==0)
        printf("YES\n");
		else 
        printf("NO\n");
	}
}