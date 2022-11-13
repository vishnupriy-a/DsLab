#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
int data;
struct node *next;
};
struct node *top=NULL;
void main()
{
int ch;
    printf("***MENU***\n");
    printf("1.insertion\n");
    printf("2.deletion\n");
    printf("3.display\n");
    printf("exit\n");
    do
    {
      printf("\nenter your choice!!!!!!!!!!!\n");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1 :push();
                    break;
          case 2 :pop();
                    break;
          case 3 :display();
                    break;
          case 4 :exit(0);
                  break;
          default:printf("enter a valid choice:\n");
      }
    }while(ch!=0);
}
void push()
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data:\n");
scanf("%d",&newnode->data);
if(top==NULL)
{
newnode->next=NULL;
top=newnode;
}
else
{
newnode->next=top;
top=newnode;
}
}
void pop()
{
struct node *temp;
if(top==NULL)
{
printf("underflow occurs:\n");
}
else
{
temp=top;
top=top->next;
free(temp);
}
}
void display()
{
if(top==NULL)
{
printf("stack is empty:\n");
}
else
{
  struct node *temp;
printf("stack elements are\n");
temp=top;
while(temp->next!=NULL)
{
printf("%d--->",temp->data);
temp=temp->next;
}
printf("%d-->",temp->data);
}
}
