#include<stdio.h>

int main(){
	int i,j,a[10];
	int min=0,max=0;
	
	printf("enter array elements\n");
	for(i=0;i<10;i++)
	scanf("%d", &a[i]);
    min=a[i];
	for(j=0;j<10;j++){
		if(max<a[j])
		max=a[j];
		
		if(min>a[j])
		min=a[j];
	}
	
	printf("max is %d\n", max);
	printf("min is %d", min);
	return 0;
}
