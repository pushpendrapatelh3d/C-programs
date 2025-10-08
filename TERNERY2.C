#include<stdio.h>

int main(){
    int i;
    printf("enter anumber :");
    scanf("%d",&i);
    i>0?printf("positive"):i<0?printf("negative"):printf("zero");
    
}