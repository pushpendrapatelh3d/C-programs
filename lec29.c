#include<stdio.h>

int fact(int a)
{
    if(a==0)
    {
        return 1;
    }
    return a*fact(a-1);
}

int main()
{
    int a;
    printf("enter a number to find its factorial:");
    scanf("%d",&a);
    int data = fact(a);
    printf("factorial of %d = %d",a,data);

}