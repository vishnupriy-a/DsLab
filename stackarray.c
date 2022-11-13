#include <stdio.h>
void push();
void pop();
void display();
int top=-1,stack[40],size;
void main()
{
    int ch;
    printf("enter the size of the queue:\n");
    scanf("%d",&size);
    printf("*******MENU********\n");
    printf("1.insertion\n");
    printf("2.deletion\n");
    printf("3.display\n");
    printf("4.exit\n");
    do
    {
    printf("\nenter your choice!!!!!!!\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 :push();
                break;
        case 2 :pop();
                break;
        case 3 :display();
                break;
        case 4 :break;
        default:printf("enter a valid choice!!!!!!\n");
    }
    }
    while(ch!=4);
}
    void push()
    {
        int x;
        if(top==size-1)
        {
            printf("stack is full\n");
        }
        else
        {
            printf("enter the element to be inserted:\n");
            scanf("%d",&x);
            top++;
            stack[top]=x;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            printf("stack is empty\n");
        }
        else
        {
             printf("deleted element is...%d",stack[top]);
             top--;
        }
    }
    void display()
    {
        if(top==-1)
        {
            printf("stack is empty\n");
        }
        else
        {
            int i;
            printf("stack elements are.......");
            for(i=top;i>=0;i--)
            {
                printf("%d\t",stack[i]);
            }
        }
    }
