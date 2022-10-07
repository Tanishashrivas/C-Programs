#include<stdio.h>

int main(){
    int a;
    float b,c;
    float sum;
    printf("enter the numbers a,b,c:\n");
    scanf("%d",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    
    sum = a+b+c;
    printf("sum of the 3 numbers is :%f", sum);
    return 0;
}
