#include<stdio.h>

int main(){
	int arr[2][2]={1,2,3,4};
	int arr2[2][2]={5,6,7,8};
	int fa[2][2];
	int i,j,k;
	printf("This is the addition of 2D arrays\n");
	for(i=0;i<2;i++){
		printf("\n");
		for(j=0;j<2;j++)
//		printf("fa[%d][%d]= %d ",i,j, arr[i][j]+arr2[i][j]);
        printf(" %d  ", arr[i][j]+arr2[i][j]);
	}
	
	//subtraction
	printf("\nThis is the subtraction of 2D arrays\n");
	for(i=0;i<2;i++){
		printf("\n");
		for(j=0;j<2;j++)
        printf(" %d  ", arr[i][j]-arr2[i][j]);
	}
	
	//multiplication
	printf("\nThis is the multiplication of 2D arrays\n");
	for(i=0;i<2;i++){
		printf("\n");
		for(j=0;j<2;j++){
			fa[i][j]=0;
			for(k=0;k<2;k++){
				fa[i][j]+= arr[i][k]*arr2[k][j];
			}
    	}
	}
	
	// display product matrix
	for(i=0;i<2;i++){
		printf("\n");
			for(k=0;k<2;k++){
				printf("%d ", fa[i][k]);
			}
	}
	
	return 0;
}
