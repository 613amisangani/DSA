#include<stdio.h>
int main()
{
    int array[5] = {11,22,33,44,55},i,a;
    
    for(i = 0;i<5;i++)
    {
        a = array[0];
        array[0] = array[4];
        array[4]= a;
        printf("%d \t",array[i]);
    }
}