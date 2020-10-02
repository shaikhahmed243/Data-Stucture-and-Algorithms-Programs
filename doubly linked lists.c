//doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *prev;
    struct node *next;
};
typedef struct node *NODE;
NODE getnode()
{
    NODE x=(NODE)malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf("Mem not available\n");
        exit(0);
        
    }
    return x;
}
NODE insert_front(int item,NODE y)
{
    NODE new_node=getnode();
    new_node->info=item;
    new_node->next=NULL;
    new_node->prev=NULL;
    if(y==NULL)
        return new_node;
    y->prev=new_node;
    new_node->next=y;
    y=new_node;
    return y;
   
}
NODE insert_rear(int item,NODE y)
{
    NODE new_node=getnode();
    new_node->info=item;
    new_node->next=NULL;
    new_node->prev=NULL;
    if(y==NULL)
        return new_node;
    NODE cur=y;
    while(cur->next!=NULL)
    {
        cur=cur->next;
    }
    cur->next=new_node;
    new_node->prev=cur;
    return y;
     
}
NODE delete_front(NODE y)
{
    if(y==NULL)
    {
        printf("List is empty\n");
        return NULL;
    }
    if(y->next==NULL)
    {
        printf("The Only node is deleted\n");
        free(y);
        return NULL;
    }
    NODE cur=y->next;
    cur->prev=NULL;
    free(y);
    return cur;
}
NODE delete_rear(NODE y)
{
    if(y==NULL)
    {
        printf("List is empty\n");
        return NULL;
    }
    if(y->next==NULL)
    {
        printf("The Only node is deleted\n");
        free(y);
        return NULL;
    }
    NODE cur=y;
    while(cur->next!=NULL)
        cur=cur->next;
    NODE temp=cur->prev;
    temp->next=NULL;
    free(cur);
    return y;
}
void display(NODE y)
{
    NODE cur=y;
    while(cur!=NULL)
    {
        printf("%d  ",cur->info);
        cur=cur->next;
    }
    printf("\n");
}
int main()
{
    
    NODE first=NULL;
    first=delete_front(first);/*not possible as list is empty*/
    first=delete_rear(first); 
    
    first=insert_front(3,first);
    display(first);
    first = delete_front(first);
    
    
    first=insert_front(3,first);
    first=insert_front(2,first);
    first=insert_front(1,first);
    
    display(first);
    
    first=insert_rear(7,first);
    first=insert_rear(8,first);
    first=insert_rear(9,first);
    
    display(first);
    
   first= delete_rear(first);
    display(first);
    
   first= delete_front(first);
    display(first);
    
    return 0;
    
}
