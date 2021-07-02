#include<stdio.h>
#include<conio.h>
#include<string.h>

#define MAX 5

void push();
void pop();
void display();

char stack[MAX][20], data[20];
int top=-1;

int main()
{
    system("CLS");
    printf ("\t\t\t\t      STACK OPERATIONS\n");
    printf("\t\t\t\t----------------------------\n");
    printf("\t\t\t\t|      1. PUSH             |\n\t\t\t\t|");
    printf("      2. POP              |\n\t\t\t\t|");
    printf("      3. DISPLAY          |\n\t\t\t\t|");
    printf("      4. EXIT             |\n");
    printf("\t\t\t\t----------------------------\n");
    int ch;
    printf("\n\t\t\t\tEnter choice:");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
    default:
        printf("\n\t\t\t\tWrong choice.");
        getch();
        system("CLS");
        main();
    }
}
void push()
{
    if(top==MAX-1)
    {
        printf("\n\t\t\t\tOVERFLOW..");
    }
    else
    {
        printf("\n\t\t\t\tEnter item:");
        scanf(" %s", data);
        top++;
        strcpy(stack[top], data);
    }
    getch();
    system("CLS");
    main();
}
void pop()
{
    if(top==-1)
    {
        printf("\n\t\t\t\tUNDERFLOW.");
    }
    else
    {
        printf("\n\t\t\t\tPoped item is: %s", data);
        top--;
        strcpy(data, stack[top]);
        printf("\n\t\t\t\tAfter Poped item is:\n");
        for(int i=top; i>=0; i--)
        {
            printf("\t\t\t\t                     |%s|\n", stack[i]);
        }
    }
    getch();
    system("CLS");
    main();
}
void display()
{
    if(top==-1)
    {
        printf("\n\t\t\t\tStack is empty.");
    }
    else
    {
        printf("\n\t\t\t\tItems in the stack:\n");
        for(int i=top;i>=0;i--)
        {
            printf("\t\t\t\t                   |%s|\n", stack[i]);
        }
    }
    getch();
    system("CLS");
    main();
}
