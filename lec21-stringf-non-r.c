#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="abcdabcqd";
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
    int count = 0;
    for(int i=0;i<256;i++)
    {
        if(freq[i]==1)
        {
            printf("\n%c is non repeating character",i,freq[i]);
            count++;
        }
    }
    if(count==0)
    {
        printf("\nno non repeating character exist");
    }
    return 0;
}