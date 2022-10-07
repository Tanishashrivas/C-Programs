#include<stdio.h>

int main(){
	int arr[10];
	printf("enter array elements !\n");
	for(int i=0;i<10;i++){
	scanf("%d", &arr[i]);
}
int *ptr=arr;
    for(int i=0;i<10;i++){
	printf("entered elements are :%d\n",*(ptr+i));
}
return 0;
}
