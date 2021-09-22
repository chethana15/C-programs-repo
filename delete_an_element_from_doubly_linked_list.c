#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*first=NULL;

void create(int a[],int n)
{
    struct node *t,*last;
    int i;
    
    first=(struct node*)malloc(sizeof(struct node));
    first->data=a[0];
    first->prev=first->next=NULL;
    last=first;
    
    for(i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
}

void display(struct node*p)
{
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int length(struct node*p)
{
    int len=0;
    while(p)
    {
        len++;
        p=p->next;
    }
    return len;
}

void insert(struct node *p, int index,int x)
{
    struct node *t;
    int i;
    
    if(index<0 || index >length(p))
    return;
    
    if(index==0)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=x;
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;
    }
    else
    {
        for(i=0;i<index-1;i++)
        {
            p=p->next;
            t=(struct node*)malloc(sizeof(struct node));
            t->data=x;
            t->prev=p;
            t->next=p->next;
            if(p->next)p->next->prev=t;
            p->next=t;
        }
    }
}

int delete(struct node *p,int index)
{
    struct node *q;
    int x=-1,i;
    if(index<1 || index>length(p))
    return -1;
    
    if(index==1)
    {
        first=first->next;
        if(first)first->prev=NULL;
        
        x=p->data;
        free(p);
    }
    else
    {
        for(i=0;i<index-1;i++)
        p=p->next;
        p->prev->next=p->next;
        if(p->next)
        p->next->prev=p->prev;
        x=p->data;
        free(p);
    }
    return x;
}
int main()
{
    int a[]={1,2,3,4,5};
    create(a,5);
    //insert(first,2,25);
    delete(first,2);
    printf("length is %d\n",length(first));
    
    display(first);
    return 0;
}