#include<stdio.h>

int main(){
	int a[10],i,j,x;
	printf("enter array elements\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	
	printf("enter  the element to be searched\n");
	scanf("%d", &x);
	
	for(j=0;j<10;j++){
		if(a[j]==x){
			printf("element %d found at index %d\n", x, j);
			break;
		}
	}
	if(j==10){ //j will not be 10 inside the loop so the condition becomes false.
		printf("element is not present in the array");
	}
		return 0;
	}
