#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    char str[10][10];
    char ch[10];
    printf("Enter the number of node:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter Data For Node %d:",i+1);
        scanf(" %s",ch);
        str[i]=ch[i];
    }
    for(int i=0;i<n;i++){
    printf(" %s\n", str[i]);
    }
    return 0;
}
