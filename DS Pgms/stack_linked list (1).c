#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *top;
void main(){
int choice=0;
while(1)
{
 printf("\nMENU");
 printf("\nChoose an operation from the below");
 printf("\n1.Push\n 2.Pop\n 3.Display\n 4.Search \n 5.Exit \n");
 scanf("%d",&choice);
 switch(choice)
  {
    case 1:Push();
          break;
    case 2: Pop();
          break;
    case 3:Display();
          break;
    case 4:Search();
          break;
    case 5:exit(0);
          break;
    default:printf("Invalid Input");
      }
  }
}
void Push()
{
int item;
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("Unable to Push the elememt");
}
else{
printf("\nEnter the element to be inserted\n");
scanf("%d",&item);
  if(top==NULL)
     {
      newnode->data=item;
      newnode->next=NULL;
      top=newnode;
     }
     else
     {
     newnode->data=item;
     newnode->next=top;
     top=newnode;
     }
     printf("\nItem Pushed\n");
 }
}
void Pop()
{
struct node *temp;
if(top==NULL)
{
printf("Stack is empty");
}
else
{
temp=top;
printf("\nData Deleted is %d\n",temp->data);
top=temp->next;
free(temp);
}
}
void Display()
{
struct node *temp;
temp=top;
if(temp==NULL)
{
printf("Nothing to print");
}
else
 {
printf("\nPrinting values\n");
  while(temp!=NULL)
    {
    printf("%3d",temp->data);
    temp=temp->next;
    }
  }
}
void Search()
{
    int item;
    struct node  *temp=top;
    printf("Enter the element to be searched");
    scanf("%d",&item);
    while(temp->data==item)
    {
       temp=temp->next;
        printf("%d is  present in the linked list",item);
    }
}
