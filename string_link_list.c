#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define MAX 10

typedef struct node Node;
struct node
{
    char data[10];
    Node *next;

}*head;

void create_node();
void delete_begin();
void delete_end();
void delete_mid();
void delete_all();
void display();

int main()
{
    system("CLS");
    int c,ch,pos;
    printf("\t\t\t\t1. Create Node\n\t\t\t\t2. Delete\n\t\t\t\t3. Display\n\t\t\t\t4. Exit\n\n");
    printf("\t\t\t\tEnter choice: ");
    scanf("%d", &c);
    switch(c)
    {
    case 1:
        create_node();
        break;
    case 2:
        system("CLS");
        printf("\n\t\t\t\t1. Delete From Begin\n");
        printf("\n\t\t\t\t2. Delete From End\n");
        printf("\n\t\t\t\t3. Delete From Middle\n");
        printf("\n\t\t\t\t4. Delete All Node\n\n");
        printf("\n\t\t\t\tEnter choice:");
        scanf("%d", &ch);
        if(ch==1)
        {
            delete_begin();
        }
        else if(ch==2)
        {
            delete_end();
        }
        else if(ch==3)
        {
            delete_mid();
        }
        else if(ch==4)
        {
            delete_all();
        }
        else
        {
            printf("\n\t\t\t\tWrong Choice!!");
            getch();
            main();
        }
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
    default:
        printf("\n\t\t\t\tWrong Choice!!!\n\n\t\t\t\tTry Again");
        getch();
        main();
    }
    return 0;
}
void create_node()
{
    Node *fnode, *tmp;
    char num[10];
    int i,n;
    head=(Node*)malloc(sizeof(Node));
    if(head==NULL)
    {
        printf("\n\t\t\t\tMemory can not be allocated");
    }
    else
    {
        printf("\n\t\t\t\tEnter the number of nodes:");
        scanf("%d", &n);
        printf("\n\t\t\t\tEnter data for node 1:");
        scanf(" %s", num);
        head->data[10]=num[10];
        head->next=NULL;
        tmp=head;
        for(i=2; i<=n; i++)
        {
            fnode=(Node*)malloc(sizeof(Node));
            if(fnode==NULL)
            {
                printf("\n\t\t\t\tMemory can not be allocated");
                break;
            }
            else
            {
                printf("\n\t\t\t\tEnter data for node %d:", i);
                scanf(" %s", num);
                fnode->data[10]=num[10];
                fnode->next=NULL;
                tmp->next=fnode;
                tmp=tmp->next;
            }
        }
        main();
    }
}

void delete_begin()
{
    Node *tmp;
    if(head==NULL)
    {
        printf("\n\t\t\t\tList is Empty\n");
        getch();
        main();
    }
    else
    {
        tmp=head;
        head=head->next;
        printf("\n\t\t\t\tData %s Deleted Successfully\n", tmp->data);
        free(tmp);
        tmp=head;
        printf("\n\t\t\t\tAfter Deleted Data from list:\n\n");
        while(tmp!=NULL)
        {
            printf("\t\t\t\tDATA = %p %s %p\n",tmp, tmp->data, tmp->next);
            tmp=tmp->next;
        }
        getch();
        main();
    }

}
void delete_end()
{
    Node *tmp,*prev;
    if(head==NULL)
    {
        printf("\n\t\t\t\tList is Empty\n");
        getch();
        main();
    }
    else
    {
        tmp=head;
        while(tmp->next!=NULL)
        {
            prev=tmp;
            tmp=tmp->next;
        }
        if(tmp==head)
        {
            head=NULL;
        }
        else
        {
            prev->next=NULL;
        }
        printf("\n\t\t\t\tData %s Deleted Successfully\n", tmp->data);
        free(tmp);
        tmp=head;
        printf("\n\t\t\t\tAfter Deleted Data from list:\n\n");
        while(tmp!=NULL)
        {
            printf("\t\t\t\tDATA = %p %s %p\n",tmp, tmp->data, tmp->next);
            tmp=tmp->next;
        }
        getch();
        main();
    }

}
void delete_mid()
{
    int pos,i;
    Node *tmp,*prev;
    if(head==NULL)
    {
        printf("\n\t\t\t\tList Is Empty\n");
        getch();
        main();
    }
    else
    {
        printf("\n\t\t\t\tEnter The Position:");
        scanf("%d", &pos);
        tmp=head;
        for(i=2; i<=pos; i++)
        {
            prev=tmp;
            tmp=tmp->next;

            if(tmp==NULL)
                break;
        }
        if(tmp!=NULL)
        {
            if(tmp==head)
            {
                head=head->next;
            }
            prev->next=tmp->next;
            tmp->next=NULL;
            printf("\n\t\t\t\tData %s Deleted Successfully From Position %d\n", tmp->data,pos);
            free(tmp);
            tmp=head;
            printf("\n\t\t\t\tAfter Deleted Data from list:\n\n");
            while(tmp!=NULL)
            {
                printf("\t\t\t\tDATA = %p %s %p\n",tmp, tmp->data, tmp->next);
                tmp=tmp->next;
            }
            getch();
            main();
        }
        else
        {
            printf("\n\t\t\t\tDeletion Can't Be Possible For this position\n");
            getch();
            main();
        }
    }

}
void delete_all()
{
    Node *tmp;
    while(head!=NULL)
    {
        tmp=head;
        head=head->next;
        free(tmp);
    }
    printf("\n\t\t\t\tSuccessfully Deleted All Nodes %c%c%c\n", 1,1,1);
    getch();
    main();
}
void display()
{
    Node *tmp;
    if(head==NULL)
    {
        printf("\n\t\t\t\tList is empty");
        getch();
        main();
    }
    else
    {
        tmp=head;
        printf("\n\t\t\t\tData Entered in list:\n\n");
        while(tmp!=NULL)
        {
            printf("\t\t\t\tDATA = %p %s %p\n",tmp, tmp->data, tmp->next);
            tmp=tmp->next;
        }
    }
    getch();
    main();
}

