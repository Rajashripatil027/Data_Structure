#include<stdio.h>
#include<conio.h>
void insert (int a[],int n)
{
    int i,j,temp;

    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && temp<=a[j])
         {
            a[j+1]=a[j];
            j=j-1;
         }
            a[j+1]=temp;

    }
}
void display (int a[],int n)
{
        int i;

        for(i=0; i<n; i++)
        {
          printf("%d\n",a[i]);
        }
}
void main()
{
        int i,a[5],n=5;

        printf("Enter array element = \n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Before sorting = \n");
        display(a,n);
        insert(a,n);
        printf("After sorting =\n");
        display(a,n);

        getch();
}
