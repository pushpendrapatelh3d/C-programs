#include<stdio.h>


int sorted(int a[],int i,int j)
{
    if(i>j)
    {
        return 1;
    }
    if(a[i]>a[j])
    {
        return 0;
    }
    return sorted(a,i+1,j);
}

int main()
{
    int a[4]={11,2,3,4};
    int s=0;
    int e=3;
    int data = sorted(a,s,e);
    if(data == 0)
    printf("unsorted");
    else 
    printf("sorted");
}


