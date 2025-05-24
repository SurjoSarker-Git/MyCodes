#include<stdio.h>

void insertionsort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j;

        for(j=i-1;j>=0&&arr[j]>key;j--)
        {
            arr[j+1]=arr[j];
        }

        arr[j+1]=key;
    }
}
int main ()
{
    int arr[]={1,8,6,89,74,55,42};
    int n=sizeof(arr)/sizeof(arr[0]);

    insertionsort(arr,n);

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
       
    }
    return 0;
}