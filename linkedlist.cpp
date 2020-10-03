// Program 1
 // https://www.facebook.com/hitesh.vishnoi.146/posts/342179847062773
 // subscribe by Hitesh Vishnoi
 #include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

class linked_list
{
private:
    node *head,*tail;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }
};

int main()
{
    linked_list a;
    return 0;
}
// Program 2
//Subscribed on YouTube by AMRITSARI KING. Don't have facebook id.

#include<bits/stdc++.h>  
using namespace std;  
  

struct Node  
{  
    int data;  
    struct Node* next;  
};  

void printMiddle(struct Node *head)  
{  
    struct Node *slow_ptr = head;  
    struct Node *fast_ptr = head;  
  
    if (head!=NULL)  
    {  
        while (fast_ptr != NULL && fast_ptr->next != NULL)  
        {  
            fast_ptr = fast_ptr->next->next;  
            slow_ptr = slow_ptr->next;  
        }  
        printf("The middle element is [%d]\n\n", slow_ptr->data);  
    }  
}  
  

void push(struct Node** head_ref, int new_data)  
{  
 
    struct Node* new_node = new Node;  
  
    
    new_node->data = new_data;  

    new_node->next = (*head_ref);  
  
 
    (*head_ref) = new_node;  
}  

void printList(struct Node *ptr)  
{  
    while (ptr != NULL)  
    {  
        printf("%d->", ptr->data);  
        ptr = ptr->next;  
    }  
    printf("NULL\n");  
}  
  

int main()  
{  
 
    struct Node* head = NULL;  
      
      
    for (int i=5; i>0; i--)  
    {  
        push(&head, i);  
        printList(head);  
        printMiddle(head);  
    }  
  
    return 0;  
}  
