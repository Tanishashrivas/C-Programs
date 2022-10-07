#include<stdio.h>

int main(){
	int A[2][2];
	printf("enter array elements !\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++)
		{
	scanf("%d\n", &A[i][j]);
    }
}
    for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
	printf("entered elements are : %d\n", A[i][j]);
	}
}
return 0;
}
