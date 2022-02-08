#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;
void display();
void enqueue1();
void dequeue1();
void main()
{
    int choice;
    while(1)
    {
        printf("\n1.Enqueue");
        printf("\n2.Dequeue\n3. Display\n4.Search\n5.Exit\n");
        printf("Enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:enqueue1();
                   break;
            case 2:dequeue1();
                   break;
            case 3:display();
                   break;
            case 4:search();
                   break;
            case 5:exit(0);
                   break;
            default:printf("Invalid Statement");
        }
    }
}
void enqueue1()
{
    struct node *rear=front,*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value");
    scanf("%d",&newnode->data);
    if(front==NULL)
       {
           front=newnode;
           newnode->next=front;

       }
        else
        {
         while(rear->next!=front)
          {
             rear=rear->next;
          }
         rear->next=newnode;
         newnode->next=front;
       }
        printf("Node inserted");
}
void dequeue1()
{
    struct node *rear=front,*temp1=front;
    if(front==NULL)
    {
        printf("No node to Delete");
    }
    else if(front->next==rear)
    {
        front=NULL;
        free(rear);
    }
    else
    {
        while(rear->next!=front)
        {
            rear=rear->next;
        }
        front=front->next;
        rear->next=front;
        free(temp1);
    }
    printf("Node Deleted");
}
void search()
{
    struct node *rear=front;
    int value;
    printf("Enter the value you want to search");
    scanf("%d",&value);
       while(rear->data!=value)
       {
         rear=rear->next;
       }
         printf("%d is in the list",rear->data);

}
void display()
{
    struct node *rear=front;

    while(rear->next!=front)
    {
        printf("%d\t",rear->data);
        rear=rear->next;
    }
    printf("%d\t",rear->data);
}

