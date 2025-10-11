#include<stdio.h>

int main()
{
    int a[7]={23,56,7,89,10,5,100};
    
    int max = a[0];
    int min = a[0];
    for(int i=0;i<7;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
        if(a[i]<min)
        {
           min = a[i]; 
        }
    }
    printf("\nmax =%d\nmin =%d",max,min);

}