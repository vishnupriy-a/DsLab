#include<stdio.h>
#include<stdlib.h>
void insertion();
void deletion();
void searching();
void display();
struct node
	{
		int data;
		struct node *left;
		struct node *right;
	};
void main()
	{
		int ch;
		printf("***MENU***");
		do
			{
				printf("\n1.insert\n 2.delete\n 3.search\n 4.display\n");
				printf("enter your choice\n");
				scanf("%d",&ch);
				swith(ch)
					{
						case 1:insertion();
							break;
						case 2:deletion();
							break;
						case 3:searching();
							break;
						case 4:display
							break;
						case 5:exit(0);
							break;
						default:printf("enter a valid choice:");
					}
			}while(ch!=4)
	}

void insertion()
	{
	struct node *newnode,*root;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&newnode->data);
	if(


