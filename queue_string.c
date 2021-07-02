#include<stdio.h>
#include<conio.h>
#include<string.h>

#define max 3
char q[max][10];

void insert_ch();
void dilet_ch();
void display_ch();

char item[10];
int front=-1,rear=-1;

int main()
{
    system("CLS");
    int ch;
    printf("\t\t\t\t     QUEUE OPERATIONS       \n");
    printf("\t\t\t\t----------------------------\n");
    printf("\t\t\t\t|      1. INSERT           |\n");
    printf("\t\t\t\t|      2. DELETE           |\n");
    printf("\t\t\t\t|      3. DISPLAY          |\n");
    printf("\t\t\t\t|      4. EXIT             |\n");
    printf("\t\t\t\t----------------------------\n");
    printf("\n\t\t\t\tEnter choice : ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        insert_ch();
        break;
    case 2:
        dilet_ch();
        break;
    case 3:
        display_ch();
        break;
    case 4:
        exit(0);
        break;
    default:
        printf("\n\t\t\t\tWrong choice.");
        getch();
        main();
    }
}
void insert_ch()
{
    if(rear==max-1)
    {
        printf("\n\t\t\t\tQueue Overflow\n");
        getch();
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        printf("\n\t\t\t\tEnter item:");
        scanf("%s", item);
        rear++;
        strcpy(q[rear],item);
    }
    main();
}
void dilet_ch()
{
    if(front==-1||rear<front)
    {
        printf("\n\t\t\t\tQueue Underflow\n");
    }
    else
    {
        printf("\n\t\t\t\tDeleted item is: %s\n", q[front]);
        front++;
        printf("\n\t\t\t\tAfter Deleted Item is:\n");
        for(int i=front;i<=rear;i++)
        {
            printf("\n\t\t\t\t                      %s\n",q[i]);
        }
    }
    getch();
    main();
}
void display_ch()
{
    if(front==-1||rear<front)
    {
        printf("\n\t\t\t\tQueue is Empty\n");
    }
    else
    {
        printf("\n\t\t\t\tItems in Queue:\n");
        for(int i=front;i<=rear;i++)
        {
            printf("\n\t\t\t\t              %s\n",q[i]);
        }
    }
    getch();
    main();
}
