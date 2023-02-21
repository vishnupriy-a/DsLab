#include<stdio.h>
#include<stdlib.h>
struct tnode
{
	int data;
	struct tnode *left,*right;
};
	struct tnode *root=NULL;
struct tnode *createNode(int data)
{
struct tnode*newNode;
newNode=(struct tnode*)malloc(sizeof(struct tnode));
newNode->data=data;
newNode->left=NULL;
newNode->right=NULL;
return(newNode);
}
void insertion(struct tnode **node,int data)
{
	if(!*node)
		{
			*node=createNode(data);
		}
	else if(data<(*node)->data)
		{
		insertion(&(*node)->left,data);
		}
	else if(data>(*node)->data)
		{
		insertion(&(*node)->right,data);
	      }
}
void postOrder(struct tnode *node)
	{
	if(node)
		{
		postOrder(node->left);
		postOrder(node->right);
		printf("%d\t",node->data);
		}
		return;
	}
void inOrder(struct tnode *node)
	{
	if(node)
		{
		inOrder(node->left);
		printf("%d\t",node->data);
		inOrder(node->right);
		}
		return;
	}
void 	preOrder(struct tnode *node)
	{
	if(node)
		{
		printf("%d\t",node->data);
		preOrder(node->left);
		preOrder(node->right);
		}
		return;
	}
int main()
	{
		int ch,data;
		printf("menu\n");
		printf("\n1.insertion\n2.preorder\n3.inorder.4.postorder5.exit\n");
		do
			{
				printf("enter ur choice:\n");
				scanf("%d",&ch);
				switch(ch)
					{
						case 1:printf("enter the data\n");
								scanf("%d",&data);
								insertion(&root,data);
								break;
						case 2:preOrder(root);
								break;
						case 3:inOrder(root);
								break;
						case 4:postOrder(root);
								break;
						case 5:exit(0);break;
						default:printf("enter a valid choice:\n");
					}
			}while(ch!=0);
	return 0;
}