#include<stdio.h>

int main(){
	FILE *ptr;
	int n=8;
	ptr = fopen("mysk.txt", "r");
	if(ptr==NULL){
		printf("file doesn't exist");
	}
	else{
	fscanf(ptr, "%d", &n);
//    ptr = fopen("musk.txt", "w");
    printf("the value is %d\n", n);
}
    return 0;
}
