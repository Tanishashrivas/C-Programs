#include<stdio.h>


int main(){
	int arr[]={1,2,3,5,7};
	int i,n=5,j=n,ind=2;
	int data;
	printf("enter the element to be inserted:");
	scanf("%d",&data);

	printf("Array elements are:\n");
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	// INSERTION
	n=n+1;
	while(j>=ind){
		arr[j+1]=arr[j];
		j=j-1;
	}
	
	arr[ind]=data;
	printf("Array elements after insertion are:\n");
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	
// DELETION
int dp=4;
	n=n-1;
	while(j<=dp){
		arr[j-1]=arr[j];
		j=j+1;
	}
    printf("Array elements after deletion are:\n");
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
