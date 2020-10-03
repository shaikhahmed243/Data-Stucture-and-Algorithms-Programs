# https://www.facebook.com/fort.m.7/posts/385714229262556
# Subscribed by voice kaushik
//Creating A Binary Search Tree and inserting elements in the BST.
//Important point to note: Inorder traversal of a BST is always sorted
#include<stdio.h>
#include<stdlib.h>
struct node {
    struct node *lchild;int data;struct node *rchild;
};
struct node *root=NULL;
struct node *insert(struct node *p,int key)
{
    if(root==NULL)
    {
        struct node *t=(struct node *)malloc(sizeof(struct node));
        t->data=key;t->lchild=t->rchild=NULL;root=t;
        return t;
    }
    if(p==NULL)
    {
        struct node *t=(struct node *)malloc(sizeof(struct node));
        t->data=key;t->lchild=t->rchild=NULL;p=t;
        return p;
    }
    else if(key<p->data)
    {
        p->lchild=insert(p->lchild,key);
    }
else if(key>p->data)
    {
        p->rchild=insert(p->rchild,key);
    }
    else return p;
}
void inorder(struct node *p)
{
    if(p!=NULL)
        {
    inorder(p->lchild);
    printf("%d ",p->data);
        inorder(p->rchild);
    }
}
int main()
{
    //root=insert(root,20);insert(root,10);insert(root,5);insert(root,40);insert(root,30);insert(root,25);insert(root,40);insert(root,20);
    printf("How many elements  you want to insert in the binary search tree? ");
    int n;
    scanf("%d",&n);
    printf("\nEnter the elements : ");
    int j;
    scanf("%d",&j);insert(root,j);//root of the BST
    for(int i=1;i<n;i++)
    {
        scanf("%d",&j);
        insert(root,j);
    }
    printf("\nPrinting the inorder traversal of the BST : ");
    inorder(root);
}
