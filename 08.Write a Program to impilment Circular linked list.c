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
int main()
{
     int choice = 0;
     while(choice != 4)
     {
         printf("\n Select One Option From Following List = ");
         printf("\n 1.Insertion \n 2.Deletion \n 3. Display \n 4.Exit");

         printf("\n Select Your Choice = ");
         scanf("%d",&choice);

         switch(choice)
         {
            case 1:
            insertion();
            break;

            case 2:
            delection();
            break;

            case 3:
            display();
            break;

            case 4:
            exit(0);

            default:
            printf("\n Please Enter The Valid Choice = ");
         }
     }
}
void insertion()
{
    struct node *ptr;
    int item;

    ptr=(struct node*)malloc(sizeof(struct node));

    if(ptr == NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("\n Enter Item Value = ");
        scanf("%d",&item);

        if(head == NULL)
        {
            ptr->next = NULL;
            ptr->prev = NULL;
            ptr->data = item;
            head = ptr;
        }
        else
        {
            ptr->data = item;
            ptr->prev = NULL;
            ptr->next = head;
            head->prev = ptr;
            head = ptr;
        }
          printf("\n Node Inserted\n");
    }
}
void deletion()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\n Underflow");
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\n Node Deleted\n");
    }
    else
    {
        ptr = head;
        head = head->next;
        head->prev = NULL;
        free(ptr);
        printf("\n Node Deleted");
    }
}
void display()
{
        struct node *ptr;
        ptr = head;
        if(ptr == NULL)
        {
            printf("\n List is Empty");
        }
        else
        {
            printf("\n Printing Values..\n");
            while(ptr != NULL)
            {
                printf("%d\n",ptr->data);
                ptr = ptr->next;
            }
        }
}

