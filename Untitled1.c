#include<stdio.h>

int main(){
	int A[2][3];
	int i,j;
	printf("enter array elements !\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++)
		{
	scanf("%d\n", &A[i+1][j+1]);
    }
}
    printf("entered elements are : %d\n", A[i+1][j+1]);
    for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
	        printf("%d", A[i+1][j+1]);
	        if(j==2)
	        {
	        	printf("\n");
			}
		}
}
return 0;
}
