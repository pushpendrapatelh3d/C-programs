#include<stdio.h>

struct addresss{
    int pincode;
};
struct student{
    char name[100];
    int rollno;
    int age;
    char ress[100];
    struct addresss s2;
};

int main()
{
    struct student s1;
    
    printf("enter name :");
    gets(s1.name);

    printf("enter age:");
    scanf("%d",&s1.age);

    printf("enter rollno :");
    scanf("%d",&s1.rollno);

    printf("enter address :");
    scanf("%s",s1.ress);
    
    printf("enter pincode :");
    scanf("%d",&s1.s2.pincode);


    printf("\nname = %s",s1.name);
    printf("\nage = %d",s1.age);
    printf("\nrollno. = %d",s1.rollno);
    printf("\naddress = %s",s1.ress);
    printf("\npincode = %d",s1.s2.pincode);

}