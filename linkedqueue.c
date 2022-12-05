#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
struct node
{
int data;
struct node *next;
};
struct node *front=NULL,*rear=NULL;
void main()
{
int ch;
printf("\n*********MENU********\n");
printf("\n1.insertion\n2.deletion\n3.display\n4.exit\n");
do
{
printf("\nenter your choice:\n");
scanf("%d",&ch);
switch(ch)
	{
		case 1:enqueue();
			break;
		case 2:dequeue();
			break;
		case 3:display();
			break;
		case 4:exit(0);
			break;
		default:printf("\nenter a valid choice:\n");
	}
}while(ch!=4);
}
void enqueue()
	{
		struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter the data");
		scanf("%d",&newnode->data);
		if((front==NULL)&&(rear==NULL))
			{
				front=rear=newnode;
				rear->next=newnode;
			}
		else
			{
				rear->next=newnode;
				newnode->next=NULL;
				rear=newnode;
			}
	}
void dequeue()
	{
		struct node *temp;
		if(front==NULL)
			{
				printf("underflow occurs");
			}
		else
			{
				temp=front;
				front=front->next;
				free(temp);
			}
	}
void display()
	{
		struct node *temp;
		if(front==NULL)
			{
				printf("queue is empty");
			}
		else	
			{
				temp=front;
				while(temp!=NULL)
					{
						printf("%d-->",temp->data);
						temp=temp->next;
					

					}
			}
			printf("NULL");
	}
				





