#include<stdio.h>
#include<string.h>

typedef struct complex{
	int real;
	int imaginary;
}cp;

void display(cp c){
	printf("the value of real part is %d\n", c.real);
	printf("the value of imaginary part is %d\n", c.imaginary);
}

int main(){
    cp nums[5];
    for(int i=0; i<5; i++){
        printf("Enter the real value for %d num\n", i+1);
        scanf("%d", &nums[i].real);

        printf("Enter the complex value for %d num\n", i+1);
        scanf("%d", &nums[i].imaginary);
    }
    for(int i=0; i<5; i++){
        display(nums[i]);
    }
    return 0;
}

