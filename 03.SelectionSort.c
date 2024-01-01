#include<stdio.h>
#include<conio.h>
void selection(int a[],int n)
{
    int i,j,temp,small;

    for(i = 0; i<n-1; i++)
    {
        small = i;
        for(j = i+1; j<n; j++)
        {
            if(a[j] < a[small])
            {
                small = j;

                temp = a[small];
                a[small] = a[i];
                a[i] = temp;
            }
        }
    }

}
void display(int a[],int n)
{
    int i;

    for(i = 0; i<n; i++)
    {
        printf("\n %d",a[i]);
    }
}
int main()
{
     int a[5],n = 5,i;

     printf("\n Enter Array Elements = ");
     for(i = 0; i<n; i++)
     {
         scanf("%d",&a[i]);
     }

     printf("\n Before Sorting Array Elements = ");
     display(a,n);
     selection(a,n);

     printf("\n After Sorting Array Elements = ");
     display(a,n);

     getch();
     return 0;
}
