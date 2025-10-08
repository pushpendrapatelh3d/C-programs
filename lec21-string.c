#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="abcdabcqd";
    int freq[256]={0};
    int ln=strlen(str);

    for(int i=0;i<ln;i++){
        int ccount=0;
        if(str[i]==str[i+1])
        ccount++;
    }

}    