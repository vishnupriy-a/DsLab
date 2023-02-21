#include<stdio.h>
#include<stdlib.h>
struct node
{
	int key;
	struct node *left,*right;
}*root=NULL;
struct node *newNode(int item)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->key=item;
	temp->left=temp->right=NULL;
	return temp;
}
void inorder(struct node *root)
	{
		if(root!=NULL)
			{
				inorder(root->left);
				printf("%d",root->key);
				inorder(root->right);
			}
	}
struct node * insert(struct node *node,int key)
{
	if(node==NULL)
		{
			return newNode(key);
		}
	if(key<node->key)
		{
			node->left=insert(node->left,key);
		}
	else
		{
			node->right=insert(node->right,key);
		}
	return node;
}
struct node *minvalNode(struct node* node)
	{
		struct node *current=node;
		if(current && current->left!=NULL)
			current=current->left;
	return current;
	}
struct node *deletenode(struct node *root,int key)
	{
		if(root==NULL)
			{
				printf("bst is empty:");
			}
		else if(key<root->key)
			root->left=deletenode(root->left,key);
		else if(key>root->key)
			root->right=deletenode(root->right,key);
		else
			{
			if(root->left==NULL)
				{
					struct node *temp=root->right;
					free(root);
					return temp;
				}
			else if(root->right==NULL)
				{
					struct node *temp=root->left;
					free(root);
					return temp;				
				}
		
	struct node *temp=minvalNode(root->right);
		root->key=temp->key;
	root->right=deletenode(root->right,temp->key);
				}return root;
	}
int itsearch(struct node *node,int key)
	{
	while(node!=NULL)
		{
		if(key==node->key)
			return 1;
		else if(key<node->key)
			node=node->left;
		else
			node=node->right;
		}
	return 0;
}
int main()
	{
		int ch,res,item,ele;
		printf("menu\n");
		printf("\n1.insertion\n2.serching\n3.delete\n.4.inorder traversal\n5.exit\n");
		do
			{
				printf("enter ur choice:\n");
				scanf("%d",&ch);
				switch(ch)
					{
						case 1:printf("enter the data\n");
								scanf("%d",&ele);
								root=insert(root,ele);
								printf("%d,inserted!",ele);
								break;
						case 2:printf("enter the element to be searched:");
								scanf("%d",&item);
								res=itsearch(root,item);
								if(res>1)
									{
										printf("element found:");
									}
								else
									{
										printf("item not found:");
									}
								break;
						case 3:printf("enter the element to be deleted:");
								scanf("%d",&item);
								root=deletenode(root,item);
								break;
						case 4:printf("inorder traversal of the given bst is:");
								inorder(root);
								break;
						case 5:exit(0);break;
						default:printf("enter a valid choice:\n");
					}
			}while(ch!=0);

}
			
		
		
		