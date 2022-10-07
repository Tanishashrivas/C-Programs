#include<stdio.h>

int main(){
    int a;
    float b, c;
    printf("enter the numbers a,b,c:\n");
    scanf("%d",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    int sum = a + b +c; 
    printf("sum of the 3 numbers is :%d \n", sum);
    return 0;
}
