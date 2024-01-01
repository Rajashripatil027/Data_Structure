#include<stdio.h>
#include<conio.h>
int stack[100],i,choice = 0,n,top = -1;
void push();
void pop();
void show();
int main()
{
    printf("\n Enter the Number Of Elements in the Stack  = \n");
    scanf("%d",&n);

    while(choice != 4)
    {
        printf("\n Enter Your choice to perform operation on stack = \n");
        printf("\n 1.PUSH\t 2.POP\t 3.SHOW\t 4.EXIT\t\n");
        printf("\n Enter Your Choice = \n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                show();
                break ;
            }
            case 4:
            {
                printf("\n Existing..\n");
                break ;
            }
            default:
            {
                printf("\n Please Enter Vaild Choice");
            }
        }
}
     getch();

}
void push()
{
    int val;

    if(top == n-1)
    {
        printf("\n Overflow");
    }
    else
    {
        printf("\n Enter the value \n");
        scanf("%d",&val);
        top = top + 1;
        stack[top] = val;
    }
}
void pop()
{
    if(top == -1)
    {
        printf("\n Underflow\n");
    }
    else
    {
        top = top-1;
    }
}
void show()
{
    for(i = top; i >= 0; i--)
    {
        printf("%d\n",stack[i]);
    }
    if(top == -1)
    {
        printf("\n stack is Empty");
    }
    getch();
}

