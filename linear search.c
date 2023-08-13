#include<stdio.h>

int main()
{
    int a[7],i,n,p;
    for(i=0;i<7;i++)
    {
       printf("Enter value :");
       scanf("%d",&a[i]);
    }
    
      printf("Enter n :");
      scanf("%d",&n);
    for(i=0;i<7;i++)
    {
       if(a[i]==n)
       {
         printf("Element present in array");
           p = i+1;
      }
    }
    printf("position is %d",p);
    return 0;
}