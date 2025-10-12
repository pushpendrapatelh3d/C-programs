#include<stdio.h>
#include<string.h>

int main()
{
    int a[5]={1,2,3,4,5};

    
    printf("before reversing:");
    for(int i=0;i<5;i++)
    {
        printf("\n%d",a[i]);
    }
    printf("\nafter reversing :");
    for(int i=0;i<(5/2);i++)
    {
        int temp;
        temp=a[i];
        a[i]=a[5-i-1];
        a[5-i-1]=temp;
    }
    for(int i=0;i<5;i++)
    {
        printf("\n%d",a[i]);
    }

}