#include<stdio.h>
#include<stdlib.h>

int main(){
	int *ptr;
	ptr= (int*)calloc(5,sizeof(int));
	
	for(int i=0;i<5;i++){
		printf("enter the value for %d\n",i+1);
		scanf("%d", &ptr[i+1]);
	}
    for(int i=0;i<5;i++){
		printf(" the value for %d element is %d\n",i+1,ptr[i+1]);
	}
	return 0;
}
