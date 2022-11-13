#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
int rear=-1;
int front=-1;
int max,queue[20],i;
void main()
{
    int ch;
    printf("enter the size of the queue:\n");
    scanf("%d",&max);
    printf("1.insertion\n");
    printf("2.deletion\n");
    printf("3.display\n");
    printf("4.exit\n");
    do
    {
      printf("\nenter your choice!!!!!!!!!!!\n");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1 :enqueue();
                    break;
          case 2 :dequeue();
                    break;
          case 3 :display();
                   break;
          case 4 :exit(0);
                  break;
          default:printf("enter a valid choice:\n");
      }
    }while(ch!=0);
}
void enqueue()
{
  if(rear==max-1)
  {
      printf("queue is full,underflow occurs::\n");
  }
  else
  {
   if(front==-1)
   {
     front=0;
     rear=0;
   }
   int x;
     printf("enter the element to be inserted:\n");
     scanf("%d",&x);
     queue[rear]=x;
     rear=rear+1;
  }
}
void dequeue()
{
 if(front==-1 || front>rear)
 {
     printf("queue is empty,overflow occurs:");
 }
 else
 {
     printf("the deleted element is %d",queue[front]);
     front=front+1;
 }
}
void display()
{
if(front==-1)
{
printf("queue is empty");  
}
else
{
printf("the elements in the quque are...");
for(i=front;i<rear;i++)
{
    printf("%d\t",queue[i]);
}
}
}

