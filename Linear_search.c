#include<stdio.h>
int main()
{
    int a[13]={-2,-1,10,12,22,32,45,55,67,72,78,82,100};
    int i,n;
    printf("Which number you search for? ----  ");
    scanf("%d", &n);
    for(i=0;i<13;i++)
    {
        if(a[i]==n)
        {
            break;
        }
    }
    if(i<13)
        {
            printf("%d is in index %d.\n",a[i], i+1);

        }
        else
                printf("Can't find.\n");
    return 0;
}
