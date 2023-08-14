#include<stdio.h>

int main()
{
    int i,n,l;
    printf("Enter length of array ");
    scanf("%d", &l);
    int a[l];
    printf("Enter values");
    for(i=0;i<l;i++)
        scanf("%d",&a[i]);
    
    printf("Enter n :");
    scanf("%d",&n);
    for(i=0;i<l;i++)
       if(a[i]==n)
           break;
    
    if (i<l)
        printf("element present in array\n position is %d",i+1);
    else
        printf("element does not present in array");
    return 0;
}
