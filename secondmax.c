#include<stdio.h>
#include<string.h>
int main()
{

    
    int a[]={1,5,4,6,3,2,7};
    
    
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            int temp=0;
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }

    int p;
    printf("enter a numbers(less than 7)");
    scanf("%d",&p);
    printf("%d largest element:%d",p,a[7-p]);
    
    int s;
    printf("\nenter a numbers(less than 7)");
    scanf("%d",&s);
    printf("%d smallest element:%d",s,a[7-(7-s)-1]);

}