#include <stdio.h>
#include <string.h>
#include<conio.h>
int r_s(char text[], char pattern[])
{
    int i, j, k;
    int text_length, pattern_length, position = 0;

    text_length = strlen(text);
    pattern_length = strlen(pattern);

    if (pattern_length > text_length)
    {
        return -1;
    }

    for(i=0;i<= text_length-pattern_length;i++)
    {
        position=k=i;

        for (j = 0; j < pattern_length; j++)
        {
            if (pattern[j] == text[k])
            {
                k++;
            }
            else
            {
                break;
            }
        }
        if (j == pattern_length)
        {
            return position;
        }
    }
    return -1;
}

int main()
{
    char a[100], b[100];
    int position;

    printf("Enter some text:");
    gets(a);

    printf("Enter a string to find:");
    gets(b);

    position = r_s(a, b);

    if (position != -1)
    {
        printf("Found at location: %d\n", position + 1);
    }
    else
    {
        printf("Not found.\n");
    }
    getch();
    return 0;
}
