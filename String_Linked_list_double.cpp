#include<stdio.h>
#include<stdlib.h>

struct node
{
    char num[100];
    struct node *next,*prev;
}*stnode,*ennode;

void createnode(int n);
void display();

int main()
{

    int n;
    printf("Enter no of nodes:");
    scanf("%d",&n);

    createnode(n);
    display();
}

void createnode(int n)
{
    node *tmp,*newn;
    stnode=NULL;
    ennode=NULL;

    for(int i=0; i<n; i++)
    {
        newn=(node *)malloc(sizeof(node));

        printf("\nEnter data %d:",i+1);
        scanf("%s",newn->num);

        newn->next=NULL;
        newn->prev= ennode;


        if(stnode==NULL)
        {
            stnode=newn;
            ennode=stnode;

        }
        else
        {
            ennode->next=newn;
            ennode=ennode->next;

        }

    }

}

void display()
{
    node *tmp;
    if(stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf(" Data = %x  %x  %s  %x",tmp->prev,tmp, tmp->num,tmp->next);
            printf("\n");
            tmp = tmp->next;
        }
    }
}

