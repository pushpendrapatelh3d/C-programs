#include<stdio.h>
#include<string.h>

int main(){
    int a[]={-3,2,4,-7,-1,1,5};
    int neg[3];
    int pos[4];
    int ans[7];
    int index=0;
    for(int i=0,j=0,k=0;i<7;i++){
        if(a[i]<0){
            neg[j]=a[i];
            j++;
            index++;
        }        
        else{
            pos[k]=a[i];
            k++;
        }
    }
    for(int i=0;i<index;i++)
    {
        ans[i]=neg[i];
    }
    for(int i=index,j=0;i<7;i++)
    {
        ans[i]=pos[j];
        j++;
    }
    for(int i=0;i<7;i++){
        printf("\n%d",ans[i]);
    }
}