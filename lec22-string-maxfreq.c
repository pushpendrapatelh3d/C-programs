#include<stdio.h>
#include<string.h>

int main(){
    char str[]="abcdabcdsfggcxxdd";
    int freq[256]={0};
    int ln=strlen(str);
    for(int i=0;i<ln;i++)
    {
        freq[str[i]]++;
    }
 
    
    for(int i=0;i<256;i++)
    {
        if(freq[i]>0)
        {
            printf("\n%c:%d",i,freq[i]);
        }
    }
    
   
    int  max=freq[0];
    for(int j=1;j<256;j++)
    {
        if(max<freq[j])
        max = freq[j];
        
    }
   

    
    
    printf("\nmax = %d",max);
    
}
