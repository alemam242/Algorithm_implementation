#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct node Node;

struct node
{
    int num;
    Node *next;

}*head;

Node *createlist(int ar[], int size)
{
    Node *head=NULL, *tmp=NULL, *current=NULL;
    int i;
    for(i=0;i<size;i++)
    {
        tmp=(Node *)malloc(sizeof(Node));
        tmp->num=ar[i];
        tmp->next=NULL;
        if(head==NULL)
        {
            head=NULL;
            current=NULL;
        }
        else
        {
            current->next=tmp;
            current=current->next;
        }
        printf("%d->", tmp->num);
    }

}

int main()
{
    int arr[]={5,10,15,30};
    createlist(arr,4);
    return 0;
}
