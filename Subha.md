#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *ptr;
}*front,*rear,*temp,*front1;
int frontelement();
void enq(int data);
void deq();
void empty();
void display();
void create();
void queuesize();
int count = 0;
void main()
{
    int no, ch, e;
    printf("\t\t\t\t\tChose one from the below options...\n");
    printf("\n\t\t\t\t\t 1 - Enque");
    printf("\n\t\t\t\t\t 2 - Deque");
    printf("\n\t\t\t\t\t 3 - Display");
    printf("\n\t\t\t\t\t 4 - Exit");
    create();
    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            enq(no);
            break;
        case 2:
            deq();
            break;
       case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}
void create()
{
    front = rear = NULL;
}
void queuesize()
{
    printf("\n Queue size : %d", count);
}
void enq(int data)
{
    if (rear == NULL)
    {
        rear = (struct node *)malloc(1*sizeof(struct node));
        rear->ptr = NULL;
        rear->info = data;
        front = rear;
    }
    else
    {
        temp=(struct node *)malloc(1*sizeof(struct node));
        rear->ptr = temp;
        temp->info = data;
        temp->ptr = NULL;
        rear = temp;
    }
    count++;
}
void display()
{
    front1 = front;
    if ((front1 == NULL) && (rear == NULL))
    {
        printf("Queue is empty.");
        return;
    }
    while (front1 != rear)
    {
        printf("%d ", front1->info);
        front1 = front1->ptr;
    }
    if (front1 == rear)
        printf("%d", front1->info);
}
void deq()
{
    front1 = front;
    if (front1 == NULL)
    {
        printf("\n Error: Trying to display elements from empty queue");
        return;
    }
    else
        if (front1->ptr != NULL)
        {
            front1 = front1->ptr;
            printf("\n Dequed value : %d", front->info);
            free(front);
            front = front1;
        }
        else
        {
            printf("\n Dequed value : %d", front->info);
            free(front);
            front = NULL;
            rear = NULL;
        }
        count--;
}
