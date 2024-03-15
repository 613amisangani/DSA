#include<stdio.h>
int main(){

int a=0,b=2,c;
// c =  a && b;
// // printf("a :%d ,b : %d ,c : %d",a,b,c);
// c =  a && ++b;
//printf("a :%d ,b : %d ,c : %d",a,b,c);

// c =  --a && ++b;
// printf("a :%d ,b : %d ,c : %d",a,b,c);


//c =  --a && b;
//printf("a :%d ,b : %d ,c : %d",a,b,c);

// c =  --a && b;
// printf("a :%d ,b : %d ,c : %d",a,b,c);


//or ||
// c =  --a || b;
// printf("a :%d ,b : %d ,c : %d",a,b,c);

// c =  --a || ++b;
// printf("a :%d ,b : %d ,c : %d",a,b,c);

// c =  a || ++b;
// printf("a :%d ,b : %d ,c : %d",a,b,c);

c =  a || ++b;
printf("a :%d ,b : %d ,c : %d",a,b,c);

    return 0;
}