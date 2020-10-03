#include <stdio.h>

struct stack
{
    int arr[5];
    int tos;
};
void push(struct stack *, int);
int pop(struct stack *);

void main()
{
    struct stack s;
    int i, x;
    s.tos = -1;
    for (i = 1; i <= 6; i++)
    {
        printf("\nEnter a element to push:");
        scanf("%d", &x);
        push(&s, x);
    }
    for (i = 1; i < 6; i++)
    {
        x = pop(&s);
        if(x!=0)
        {
        printf("\nPopped element is:%d",x);
        }
    }
    
}

void push(struct stack *p, int x)
{
    if (p->tos == 4)
    {
        printf("\nStack overflow!");
        return;
    }
    p->tos = p->tos + 1;
    p->arr[p->tos] = x;
    printf("pushed element is %d", x);
}

int pop(struct stack *p)
{
    int x;
    if (p->tos == -1)
    {
        printf("\nStack Underflow!");
        return 0;
    }
   x=p->arr[p->tos];
   p->tos=p->tos-1;
   return x;
}
