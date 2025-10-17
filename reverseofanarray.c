#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="string";
    int ln = strlen(a);
    printf("\nbefore reversing :");
    printf("%s",a);
    
    char temp;
    for(int i=0;i<ln/2;i++)
    {
      temp=a[i];
      a[i]=a[ln-i-1];
      a[ln-i-1]=temp;

    }
    printf("\nafter reversing :");
    printf("%s",a);

}