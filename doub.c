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
	struct node *next,*prev;
};
struct node *head,*temp;
void main()
{
	int ch;	
	printf("MENU");
	printf("1.insertb\n 2.insertp\n 3.inserte\n 4.deleteb\n 5.deletep\n 6.deletee\n 7.display\n 8.exit\n");
	do
		{
			printf("enter your choice:");
			scanf("%d",&ch);
			switch(ch)
				{
					case 1: insertb();
							break;
					case 2: insertp();
							break;
					case 3: inserte();
							break;
					case 4: deleteb();
							break;
					case 5: deletep();
							break;
					case 6: deletee();
							break;
					case 7: display();
							break;
					case 1: exit(0);
							break;
					default:printf("enter a valid choice:");
				}
			}while(ch!=0)
}
void insertb()
	{
		struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter the data:")
		scanf("%d",&temp->data);
		if(head==NULL)
			{
				head=newnode;
				newnode->next=NULL;
				newnode->prev=NULL;
			}
		else if(head->next==NULL)
			{
				newnode->next=head;
				head->prev=newnode;
				newnode->prev=NULL;
				head->prev=NULL;
				head=newnode;
			}
		else
			{	
				newnode->next=head;
				head->prev=newnode;
				newnode->prev=NULL;
				head=newnode;
			}
	}
void insertp()
			{
				struct node *newnode;
				newnode=(struct node*)malloc(sizeof(struct node));
				printf("enter the data:");
				scanf("%d",&temp->data);
				int p,i;
				printf("enter the position:");
				scanf("%d",&temp->data);
				temp=head;
				for(i=1;i<pos-1;i++)
					{
						temp=temp->next;
					}
				newnode->next=temp->next;
				newnode->prev=temp;
				temp->next->prev=newnode;
				temp->next=newnode;
			}
void inserte()
			{
				struct node *newnode;
				newnode=(struct node*)malloc(sizeof(struct node));
				printf("enter the data:");
				scanf("%d",&temp->data);
				temp=head
				while(temp->next!=NULL)
					{
						temp=temp->next;
					}
				temp->next=newnode;
				newnode->prev=temp;
				newnode->next=NULL;
			}
void deleteb()
			{
				struct *ptr;
				temp=head;
				head=head->next;
				head->prev=NULL;
				free(temp);
			}
void deletep()
			{
				int p,i;
				printf("enter the position");
				scanf("%d",&p);
				temp=head;
				for(i=1;i<pos-1;i++)
					{
						temp=temp->next;
					}
				ptr=temp->next;
				temp->next=ptr->next;
				ptr->next->prev=temp;
				free(ptr);
			}
void deletee()
			{
				temp=head;
				while(temp->next!=NULL)
					{
						temp=temp->next;
					}
				ptr=temp->next;
				temp->next=NULL;
				free(ptr);
			}
void display()
			{
				temp=head;
				while(temp!=NULL)
					{
						printf("%d",temp->data);
						temp=temp->next;
					}
			}

	


				
				


				
				



