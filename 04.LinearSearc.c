#include<stdio.h>
#include<conio.h>
int linersearch(int a[],int n,int val)
{
   int i;
   for(i = 0; i<n; i++)
   {
      if(a[i] == val)
      return i+1;
   }
   return -1;
}
void main()
{
   int a[5], n = 5, i,val,result;
   printf("\n Enter Array Element =");

   for(i = 0; i<n; i++)
   {
      scanf("%d",&a[i]);
   }
   printf("\n Enter Element To Search = \n ");
   scanf("%d",&val);
   printf("\n Element Of Array =");
   for(i = 0;i<n;i++)
   {
     printf("%d",a[i]);
   }
   printf("\n The Element To be Search = %d",val);
   result = linersearch(a,n,val);
   if(result == -1)
   {
       printf("\n Element Not Found ");
   }
   else
   {
       printf("\n Element is present %d Position of Array",result);
   }
   getch();
   return 0;
}
