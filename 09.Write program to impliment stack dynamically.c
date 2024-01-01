#include<stdio.h>
#include<conio.h>
void push();
void pop();
void display();
struct node
{
int data;
struct node *next;
};
struct node *head;
void main ()
{
int choice=0;
printf("\nStack operations using linked list\n");
while(choice!= 4)
{
printf("\nChoose one from the below options...\n");
printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
printf("\n Enter your choice \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:

display();
break;
case 4:
exit(0);
break;
default:
printf("Please Enter valid choice ");
}
}
}
void push ()
{
int val;
struct node *ptr;
ptr=(struct node*)malloc(sizeof(struct node*));
if(ptr == NULL)
{
printf("Overflow");
}
else
{
printf("Enter the value");
scanf("%d",&val);
if(head==NULL)
{
ptr->data= val;
ptr ->next = NULL;
head=ptr;
}
else
{
ptr->data= val;
ptr->next = head;
head=ptr;
}
printf("Item Pushed");
}
}
void pop()
{
int val;
struct node *ptr;
if (head == NULL)
{
printf("Underflow");
}
else
{
val= head->data;
ptr = head;
head = head->next;
free(ptr);
printf("Item Popped");
}
}
void display()
{
int i;
struct node *ptr;
ptr=head;
if(ptr == NULL)
{
printf("Stack is Empty\n");
}
else
{
printf("Printing Stack elements \n");
while(ptr!=NULL)
{
printf("%d\n",ptr->data);
ptr = ptr->next;
}
}
}
