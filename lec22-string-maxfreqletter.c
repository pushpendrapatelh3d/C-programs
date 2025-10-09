#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char result;
    char s[]="abcbjfbebf";
    int ln=strlen(s);
    char freq[256]={0};
    for(i=0;i<ln;i++)
    {
        freq[s[i]]++;
    }
    int max=0;
    for(i=0,j=0;i<ln;i++)
    {
        if(freq[s[i]]>max)
        {
            max=freq[s[i]];
            result=s[i];
        }
    }
    printf("Max freq %c: %d",result,max);

}