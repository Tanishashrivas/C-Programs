#include<stdio.h>

int main(){
	int arr[2][2]={1,2,3,4};
	int i,j;
	printf("This is a 2D array\n");
	for(i=0;i<2;i++){
		printf("\n");
		for(j=0;j<2;j++)
		printf("arr[%d][%d]= %d",i,j,arr[i][j]);
	}
	return 0;
}
