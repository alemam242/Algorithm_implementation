#include<stdio.h>
#include<conio.h>
void insertion_sort(int a[], int n)
{
    int i,j,temp,count=0;
    for(i=1; i<n; i++)
    {
        temp=a[i];
        j=i-1;
        count++;
        while(temp<a[j] && j>=0)
        {

            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;

    }

    printf("Sorted elements: ");
    for(i=0; i<n; i++)
        printf(" %d",a[i]);

        printf("\nComplexity: %d", count);
}
int main()
{
    int i, n, a[25];

    printf("How many numbers you want to insert: ");
    scanf("%d",&n);
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    insertion_sort(a,n);
    getch();
    return 0;
}
