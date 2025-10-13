#include<stdio.h>

int main(){
    int input;
    printf("enter ammount:");
    scanf("%d",&input);
    int note500=0,note200=0,note100=0,note50=0,note20=0,note10=0,note5=0,note2=0,note1=0;
    
    if(input>=500){
        note500=input/500;
        printf("\nnumber of notes of 500:%d",note500);
        input=input%500;
    }
    
    if(input>=200){
        note200=input/200;
        printf("\nnumber of notes of 200:%d",note200);
        input=input%200;
    }
    if(input>=100){
        note100=input/100;
        printf("\nnumber of notes of 100:%d",note100);
        input=input%100;
    }
    if(input>=50){
        note50=input/50;
        printf("\nnumber of notes of 50:%d",note50);
        input=input%50;
    }
    if(input>=20){
        note20=input/20;
        printf("\nnumber of notes of 20:%d",note20);
        input=input%20;
    }
    if(input>=10){
        note10=input/10;
        printf("\nnumber of notes of 10:%d",note10);
        input=input%10;
    }
    if(input>=5){
        note5=input/5;
        printf("\nnumber of notes of 5:%d",note5);
        input=input%5;
    }
    if(input>=2){
        note2=input/2;
        printf("\nnumber of coins of 2:%d",note2);
        input=input%2;
    }
    note1=input;
    printf("\nnumber of coins of 1:%d",input);

int sum=note1+note2+note5+note10+note20+note50+note100+note200+note500;
printf("\ntotal number of notes and coins :%d",sum);
}