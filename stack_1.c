#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5

int stack[MAX];
int top=-1;
void push();
void pop();
void display();

int main()
{
    system("CLS");
    int ch;

    printf ("\t\t\t\t      STACK OPERATIONS\n");
    printf("\t\t\t\t----------------------------\n");
    printf("\t\t\t\t|      1. PUSH             |\n\t\t\t\t|");
    printf("      2. POP              |\n\t\t\t\t|");
    printf("      3. DISPLAY          |\n\t\t\t\t|");
    printf("      4. EXIT             |\n");
    printf("\t\t\t\t----------------------------\n");

    printf("\n\t\t\t\tEnter Your Choice:");
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
        printf("\n\t\t\t\tWrong Choice");
        getch();
        system("CLS");
        main();
    }
}

void push()
{
    int val;
    if(top==MAX-1)
    {
        printf("\n\t\t\t\tStack is Full\n");
    }
    else
    {
        printf("\n\t\t\t\tEnter value:");
        scanf("%d", &val);
        top++;
        stack[top]=val;
    }
    printf("\n\t\t\t\tPushed item is:\n");
        for(int i=top; i>=0; i--)
        {
            printf("\t\t\t\t                  |%d|\n", stack[i]);
        }
    getch();
    main();
}

void pop()
{
    if(top==-1)
    {
        printf("\n\t\t\t\tStack is Empty.\n");
    }
    else
    {
        printf("\n\t\t\t\tPoped item is: %d\n", stack[top]);
        top--;
        printf("\n\t\t\t\tAfter Poped item is:\n");
        for(int i=top; i>=0; i--)
        {
            printf("\t\t\t\t                     |%d|\n", stack[i]);
        }
    }
    getch();
    main();
}
void display()
{
    if(top==-1)
    {
        printf("\n\t\t\t\tStack is Empty.\n");
    }
    else
    {
        printf("\n\t\t\t\tElements in stack:\n");
        for(int i=top; i>=0; i--)
        {
            printf("\t\t\t\t                  |%d|\n", stack[i]);
        }
    }
    getch();
    main();
}
