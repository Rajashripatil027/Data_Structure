#include<stdio.h>
#include<conio.h>

void display( int a[],int n)
{
        int i;

        for(i = 0; i < n; i++)
        {
            printf("\n %d",a[i]);
        }
}

void bubble( int a[],int n)
{
        int i,j,temp;

        for(i = 0; i < n; i++)
        {
            for(j = i+1; j < n; j++)
            {
                if(a[j] < a[i])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
}

void main()
{
        int a[5],i,n = 5;

        printf("\n\tEnter Any Array Elements = ");

        for(i = 0; i < 5; i++)
        {
            scanf("%d",&a[i]);
        }

        printf("\n\t Before Sorting Array Elements ");

        display(a,n);
        bubble(a,n);

        printf("\n\t After Sorting Array Elements ");

        display(a,n);

        getch();
        return 0;

}

