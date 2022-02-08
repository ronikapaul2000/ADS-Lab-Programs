#include<stdio.h>
struct node{
int data;
struct node *next
};
struct node *head;
void main()
{
int choice;
while(1)
{
printf("\nMenu");
printf("Choose any one of the operation from below");
printf("\n 1.Insertion at beginning\n 2.Insertion at end\n 3.Insertion at any position");
printf("\n 4.Deletion at beginning\n 5.Deletion at end\n 6.Deletion at any position\n 7.Display\n 8.Exit\n");
printf("Enter your choice");
scanf("%d",&choice);
switch(choice)
{
    case 1:insertbeg();
        break;
    case 2:insertend();
        break;
    case 3:insertpos();
         break;
    case 4:delbeg();
         break;
    case 5:delend();
         break;
    case 6:delpos();
          break;
    case 7:display();
          break;
    case 8:exit(0);
          break;
    default:printf("Invalid Choice");
 }
}
}
void insertbeg()
{
    int item;
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(newnode==NULL)
        printf("Unable to allocate memory");
    else
    {
        printf("Enter the item");
        scanf("%d",&item);
        newnode->data=item;
        newnode->next=head;
        head=newnode;
        printf("Node inserted at the beginning\n");
    }
}
void insertend()
{
    struct node *newnode,*temp;
    int item;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(newnode==NULL)
        printf("Unable to allocate memory");
    else{
    printf("Enter the item");
    scanf("%d",&item);
    newnode->data=item;
       if(head==NULL)
         {
            newnode->next=NULL;
             head=newnode;
            printf("\nNode Inserted\n");
         }
         else
         {
             temp=head;
             while(temp->next!=NULL)
             {
                 temp=temp->next;
             }
             temp->next=newnode;
             newnode->next=NULL;
             printf("\nNode inserted\n");
         }
    }
}
void insertpos()
{
    int item,pos;
    struct node *newnode,*temp=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(newnode==NULL)
        printf("Uanble to allocate memory");
    else
    {
        printf("Enter the item");
        scanf("%d",&item);
        newnode->data=item;
        printf("Enter the location");
        scanf("%d",&pos);
        if(pos==1)
        {
            newnode->next=temp;
            head=newnode;
            return;
        }
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;

        }

 newnode->next=temp->next;
 temp->next=newnode;
 printf("\n node inserted\n");
}
}
void delbeg()
{

struct node *temp;
if(head==NULL)
    printf("List is empty");
else
{
   temp=head;
   head=temp->next;
   free(temp);
   printf("Node deleted");
}
}
void delend()
{
    struct node *temp,*temp1;
    if(head==NULL)
        printf("List is empty");
    else
    {
        temp=head;
        temp1=head;
        printf("Last node deleted");

        while(temp->next!=NULL)
        {
        temp1=temp;
        temp=temp->next;
        }
        if(temp==head)
        {
            head=NULL;
        }
        else
        {
          temp1->next=NULL;
        }
        free(temp);
        printf("Node deleted");

    }
  }
void delpos()
{
    struct node *temp,*temp1;
    int pos,i;
    printf("Enter the location");
    scanf("%d",&pos);
    temp=head;
    for(i=0;i<pos;i++)
    {
    temp1=temp;
    temp=temp->next;
        if(temp==NULL)
        {
            printf("cannot delete");
            return;
        }
    }

    temp1->next=temp->next;
    free(temp);
    printf("Node deleted at %d",pos+1);


}
void display()
{
    struct node *temp;
    temp=head;
    if(temp==NULL)
        printf("Nothing to print");
    else
    {
        printf("printing values:");
        while(temp!=NULL)
        {
            printf("%3d",temp->data);
            temp=temp->next;
        }
    }
}








