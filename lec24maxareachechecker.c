#include<stdio.h>

int main()
{
    int height[5]={1,4,3,5,2};
    int i=0,j=4;
    int maxarea = 0;
    while(i<j){
        int h;
        if(height[i]<height[j])
        {
            
            h=height[i];
        }
        else{
            h=height[j];
        }
        int w=i-j;
        int area = h*w;

        if(area>maxarea)
        maxarea = area;

        if(height[i]<height[j]){
           i++; 
        }
        else{
           j++; 
        }
    }
    printf("max area = %d",maxarea);
}