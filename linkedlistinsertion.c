#include <stdio.h>

struct node
{
    int info;
    struct node * next;
}

struct node *createSLL()
{
    struct node *p,*start=NULL;
    int item;
    printf("Enter the elements of the linked list. To sop, enter -999 \n");
    scanf("%d",&item);
    while(item!=-999)
    {
        P=(struct node *)malloc(sizeof(struct node));
        p->info=item;
        if(start==NULL)
        {
            p->next=NULL;
            start=p;
        }
        else
        {
            p->next=start;
            start=p;
        }
        scanf("%d",&item);
        return start;
    }

}

struct node insertSLLbeg(struct node * start, int item)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->info=item;
    if(start==NULL)
    {
        p->next=NULL;
        start=p;
    }
    else
    {
        p->next=start;
        start=p;
    }
    return start;
}

struct node insertSLLend(struct node * start, int item)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->info=item;
    if(start==NULL)
    {
        p->next=NULL;
        start=p;
    }
    else
    {
        temp=start;
        while(temp->next!=NULL)
            temp=temp->next;

        p->next=NULL;
        temp->next=p;
    }
    return start;
}

struct node insertSLLanyposition(struct node * start, int item, int position)
{
    struct node *p,*temp=start;
    p=(struct node *)malloc(sizeof(struct node));
    p->info=item;
    for( int i=1;i<=position-1;i++)
    {
       if(i==position-1)
       {
            p->info=item;
            p->next=temp->next;
            temp->next=p;
       }
       else
        temp=temp->next;

    }
    return start;
}

struct node *deleteSLLbeg(struct node * start)
{
    struct node * temp;
    if(start==NULL)
    {
        printf("Linked list is empty");
        return NULL;
    }
    else if(start->next==NULL)
    {
        temp=start;
        printf(%d deleted",start->info");
        start=NULL;
        free(temp);
        return(start);
    }
    else
    {
        temp=start;
        printf("Deleted %d\n",start->info);
        start=start->next;
        free(temp);
    }
    return start;
}

struct node *deleteSLLend(struct node * start)
{
    struct node * temp,*follow;
    if(start==NULL)
    {
        printf("Linked list is empty");
        return NULL;
    }
    else if(start->next==NULL)
    {
        temp=start;
        printf(%d deleted",start->info");
        start=NULL;
        free(temp);
        return(start);
    }
    else
    {
        temp=start;
        while(temp->next!=NULL)
        {
            follow=temp;
            temp=temp->next
        }
        printf("Deleted element is %d",temp->info)
    return start;
}

