#include<stdio.h>

int main(){
	int arr[3][3];
	int i,j;
	printf("Enter the elements in a 2D array\n");
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++)
		scanf("%d",&arr[i][j]);
	}
	
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++)
		printf(" %d",arr[i][j]);
	}
	return 0;
}
