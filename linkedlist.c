#include<stdio.h>
#include<stdlib.h>
void insertb();
void insertp();
void inserte();
void deleteb();
void deletep();
void deletee();
void display();
struct node
{
  int data;
struct node *next;
};
struct node *head,*temp;
void main()
{
int ch;
    printf("******MENU********\n");
    printf("1.insertion at the beginning\n");
    printf("2.insertion at a perticular position\n");
    printf("3.insertion at the end\n");
    printf("4.deletion at the beginning\n");
    printf("5.deletion at a perticular postion\n");
    printf("6.deletion at the end\n");
    printf("7.display\n");
    printf("8.exit\n");
    do
    {
      printf("\nenter your choice!!!!!!!!!!!\n");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1 :insertb();
                    break;
          case 2 :insertp();
                    break;
          case 3 :inserte();
                    break;
          case 4 :deleteb();
                    break;
          case 5 :deletep();
                    break;
          case 6 :deletee();
                    break;
          case 7 :display();
                   break;
          case 8 :exit(0);
                  break;
          default:printf("enter a valid choice:\n");
      }
    }while(ch!=0);
}
void insertb()
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the element to be inserted:\n");
scanf("%d",&newnode->data);
newnode->next=head;
head=newnode;
}
void insertp()
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the element to be inserted:\n");
scanf("%d",&newnode->data);
int pos,i=1;
printf("enter the position:\n");
scanf("%d",&pos);
temp=head;
while(i<pos-1)
{
temp=temp->next;
i++;
}
newnode->next=temp->next;
temp->next=newnode;
}
void inserte()
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the element to be inserted:\n");
scanf("%d",&newnode->data);
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newnode;
newnode->next=NULL;
}
void deleteb()
{
temp=head;
head=head->next;
free(temp);
}
void deletep()
{
struct node *ptr; 
int i=1,pos;
printf("enter the position:\n");
scanf("%d",&pos);
temp=head;
while(i<pos)
{
ptr=temp;
temp=temp->next;
i++;
}
ptr->next=temp->next;
free(temp);
}
void deletee()
{
temp=head;
struct node *ptr; 
while(temp->next!=NULL)
{
ptr=temp;
temp=temp->next;
}
ptr->next=NULL;
free(temp);
}
void display()
{
temp=head;
printf("elements are..\n");
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}
