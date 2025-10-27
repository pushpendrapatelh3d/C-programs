#include<stdio.h>
#include<string.h>

int main()
{
    int a[5]={7,5,4,6,1};
    int min=a[0];
    int j=0;
    int k;
    for(int i=0;i<5;i++)
    {
        if(min>a[i]){
            min=a[i];
            
            k=i;
        }
    }
    int max=a[k];
    int t;
    while(k<5){
        if(max<a[k]){
            max=a[k];
            t=k;
        }
        k++;
    }
    int maxprofit;

    
        maxprofit=max-min;
    printf("max profit= %d",maxprofit);


}