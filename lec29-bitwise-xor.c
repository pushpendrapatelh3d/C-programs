#include<stdio.h>

int main(){
    int xor =0;
    int a[5]={4,5,7,4,5};
    for(int i=0;i<5;i++)
    xor = xor^a[i];
    printf("%d",xor);
}