#include<stdio.h>
#include<conio.h>
void binarysearch(int a[],int beg,int end,int val)
{
     int mid;

     mid = (end + beg)/2;

     if(a[mid] == -1)
     {
         return mid + 1;
     }
     else if(a[mid] < -1)
     {
         return binarsearch(a,end,mid +1,val);
     }
     else
     {
         return binarysearch(a,beg,mid - 1,val);
     }
     return -1;
}
int main()
{
     int a[5],n=5,i,result,val;

     printf("\n Enter Array Elements = ");

     for(i = 0; i<n; i++)
     {
         scanf("%d",&a[i]);
     }

     printf("\n Enter Value To search = ");
     scanf("%d",&val);

     printf("\n The Array Elements Are = ");
     for(i = 0; i<n; i++)
     {
         printf("\n %d",a[i]);
     }

     printf("\n Enter Value is Search to be  %d ",val);

     result = binarysearch(a,0,n-1,val);

     if( result == -1)
     {
         printf("\n The Elements is Not Found ");
     }
     else
     {
         printf("\n The Elements is present to %d position in array",result);
     }

     getch();
     return 0;

}
