#include<stdio.h>

int main(){
	int a[10],i,j,sum;
	printf("enter array elements\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(j=0;j<10;j++)
		sum+= a[j];

    printf("sum of all the array elements is %d\n", sum);
    return 0;
}
