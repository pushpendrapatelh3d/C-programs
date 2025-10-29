#include<stdio.h>

int main()
{
   int a=5;
   int b=3;
   printf("before swapping :\n");
   printf("a=%d",a);
   printf("b=%d",b);
   a=a^b;
   b=a^b;
   a=a^b;
   printf("\nafter swapping :\n"); 
   printf("a=%d",a);
   printf("b=%d",b);
}