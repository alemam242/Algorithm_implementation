#include<stdio.h>
#include<conio.h>
void bubble_sort(int a[], int n)
{
    int i = 0, j = 0, tmp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    printf("Printing the sorted array:\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
}
int main()
{
    int a[100], n, i, d, swap;
    printf("Enter number of elements in the array:\n");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    bubble_sort(a, n);

    getch();
    return 0;
}
