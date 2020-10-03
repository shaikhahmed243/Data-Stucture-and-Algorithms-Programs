//circular linkedlist
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
    
};
typedef struct node *NODE;
NODE getnode()
{
    NODE x=(NODE)malloc(sizeof(struct node));
    if(x==NULL){
        printf("Mem not available\n");
        exit(0);
    }
    return x;
}
NODE insert_front(int item,NODE y)  
{
    NODE new_node=getnode();
    new_node->info=item;
    new_node->link=new_node;
    if(y==NULL)
        return new_node;
    new_node->link=y->link;
    y->link=new_node;
    return y;
    
}
 NODE insert_rear(int item,NODE y)
{
    NODE new_node=getnode();
    new_node->info=item;
    new_node->link=new_node;
    if(y==NULL)
        return new_node;
    new_node->link=y->link;
    y->link=new_node;
    y=new_node;
    return y;
    
}

NODE delete_front(NODE y)
{
    if(y==NULL)
    {
        printf("LinkedList doesn't exsists\n");
        return y;
    }
    NODE temp=y->link;
    y->link=temp->link;
    free(temp);
    return y;
}
NODE delete_rear(NODE y)
{
    NODE cur,prev;
    if(y==NULL)
    {
        printf("Linked list doesn't exsists\n");
        return y;
    }
    cur=y->link;
    prev=NULL;
    while(cur!=y)
    {
        prev=cur;
       cur=cur->link;
    }
    prev->link=y->link;
    y=prev;
    free(cur);
    return y;
}
void display(NODE y)
{
    NODE cur=y->link;
    while(cur!=y)
    {
        printf("%d ",(*cur).info);
        cur=cur->link;
    }
    printf("%d\n",cur->info);
}
int main()
{
    NODE last=NULL;
    last=insert_front(8,last);
    last=insert_front(7,last);
    last=insert_front(6,last);
    
    display(last);
    
    last=insert_rear(9,last);
    last=insert_rear(10,last);
    last=insert_rear(11,last);
    
    display(last);
    
    
    last=delete_front(last);
    display(last);
    
    last=delete_rear(last);
    display(last);
    
    return 0;
    
}

