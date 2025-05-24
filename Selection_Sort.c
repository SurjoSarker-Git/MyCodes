#include<stdio.h>

void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;

        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

    
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);

    }
    printf("\n");
}

int main ()
    {
        int arr[]={10,80,65,44,78,96,748,-23};
        int n=sizeof(arr)/sizeof(arr[0]);

        selectionsort(arr,n);
        print(arr,n);
        return 0;
    }