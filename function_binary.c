#include<stdio.h>
int binary_search(int a[], int n, int x)
{
    int i;
    int left, right, mid;
    left=0;
    right=n-1;

    while(left<=right)
    {
        mid=(left+right)/2;
        if(a[mid]==x)
        {
            printf("We find %d in location %d\n", x, mid+1);
            break;
        }
        else if(a[mid]<x)
        {
            left=mid+1;
        }
        else{
            right = mid-1;

        }
    }
    if(left>right)
            printf("Not found!!! %d is not present.\n", x);
}
int main()
{

    int a[100], i, n, x;
    printf("How many value you want to add in array: ");
    scanf("%d", &n);
    printf("Enter values:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Which value you want to search: ");
    scanf("%d", &x);

    printf("\n searching....\n\n");


    binary_search(a,n,x);

    return 0;
}
