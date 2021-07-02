#include<stdio.h>
#include<conio.h>
int main()
{
    char a[100], search;
    int n,i;
    int first,last,mid;


    printf("How many value you want to add in array: ");
    scanf("%d", &n);


    printf("Enter values:\n");

    for(i=0; i<n; i++)
    {
        scanf("%s", &a[i]);
    }

    printf("Which value you want to search: ");
    scanf("%c", &search);

    printf("\n searching....\n");

    first = 0;
    last = n-1;


    while(first<=last)
    {
        mid=(first+last)/2;
        if(a[mid]==search)
        {
            printf("We find %c in location %d\n", search, mid+1);
            break;
        }
        else if(a[mid]<search)
        {
            first=mid+1;
        }
        else{
            last = mid-1;

        }
    }
    if(first>last)
            printf("Not found!!! %c is not present.\n", search);

    getch();
    return 0;
}
