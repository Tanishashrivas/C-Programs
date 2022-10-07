#include<stdio.h>
//void count_pos(int arr*, int n);

int main(){
	int count_pos=0,count_neg=0;
	
	int integers[]={4,-5,42,-56,-12,95,74,88,3,-22,-33};
    int i;
    if(integers[i]>0){
    	printf("number of positive integers is %d\n", count_pos=0);
	}
	else if(integers[i]<0){
    	printf("number of negative integers is %d\n", count_neg=0);
	}
	return 0;
}
