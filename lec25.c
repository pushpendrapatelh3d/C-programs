#include<stdio.h>
#include<string.h>

int main()
{
    int a[]={4,0,3,5,0};
    
    printf("before arranging:\n");
    for(int i=0;i<5;i++)
    printf("%d",a[i]);
    int j=0;
    for(int i=0;i<5;i++)
    {
        if(a[i]!=0)
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
    printf("\nafter arranging:\n");
    for(int i=0;i<5;i++)
    printf("%d",a[i]);

    

}