#include <stdio.h>

void bubblesort(int arr[], int n) 
{
    for (int i=0;i<n-1;i++) 
    {
        for (int j=0; j<n-i-1;j++) 
        {
            if (arr[j] > arr[j+1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int binarysearch(int arr[],int l,int r,int x) 
{
    if (r>=l) 
    {
        int mid =l+(r-l)/2;

        if (arr[mid]==x)
            return mid;

        if (arr[mid]>x)
        return binarysearch(arr,l,mid-1,x);
        
        else
        return binarysearch(arr,mid+1,r,x);
    }

    return -1;
}

int main() 
{
    int n, i, x;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the registration numbers:\n");
    for (i=0; i<n;i++) 
    {
        scanf("%d", &arr[i]);
    }

    bubblesort(arr, n);
    printf("Sorted array:\n");
    for (i=0; i<n; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("Enter the registration number : ");
    scanf("%d", &x);

    int result= binarysearch(arr, 0, n - 1, x);
    if (result==-1)
        printf("Element is not present in array\n");
    else
        printf("index %d\n", result);

    return 0;
}