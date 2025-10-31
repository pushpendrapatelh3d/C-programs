#include<stdio.h>

int palindrome(int a[],int i,int j)
{
    if(i>=j)
    {
        return 1;
    }
    if(a[i]!=a[j])
    {
        return 0;
    }
    return palindrome(a,++i,--j);
}

int main()
{
    int a[3]={1,2,3};
    int startindex = 0 ;
    int endindex = 2 ;
    int data = palindrome(a,startindex,endindex);
    if (data == 1)
    printf("pallindrome");
    else 
    printf("not a palindrome");
}