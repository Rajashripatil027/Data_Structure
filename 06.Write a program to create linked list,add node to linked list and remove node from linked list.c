#include<stdio.h>
#include<conio.h>
struct node
{
  int data;
  struct node *next;
};
struct node *head;
void insertion();
void deletion();
void display();
void main()
{
  int choice = 0;

  while(choice != 4)
  {
    printf("\n Choose one option from the following list\n");

    printf("\n 1.Insertion \n 2.Deletion \n 3.Display \n 4.Exit");

    printf("\n Enter Your Choice = ");
    scanf("%d",&choice);

    switch(choice)
    {
     case 1:
     insertion();
     break;
     case 2:
     deletion();
     break;
     case 3:
     display();
     break;
     case 4:
     exit(0);
     break;
     default:

     printf("\n Please Enter Valid Choice \n");
     }
  }
}
void insertion()
{
  struct node *ptr;
  int item;
  ptr=(struct node*)malloc(sizeof(struct node*));

  if(ptr == NULL)
  {
    printf("\n OVERFLOW");
  }
  else
  {
    printf("\n Enter Value\n");
    scanf("%d",&item);
    ptr->data=item;
    ptr->next=head;
    head=ptr;

    printf("\n Node Inserted");
    }
}
void deletion()
{
  struct node *ptr;
  if(head == NULL)
  {
    printf("\n List is Empty\n");
  }
  else
  {
    ptr = head;
    head = ptr->next;
    free(ptr);
    printf("\n Node Deleted from the begining\n");
  }
}
void display()
{
 struct node *ptr;
 ptr = head;
 if(ptr == NULL)
 {
   printf("\n Empty List");
 }
 else
 {
   printf("\n Printing Values \n");
   while(ptr != NULL)
   {
     printf("\n %d",ptr->data);
     ptr = ptr->next;
   }
 }
}
