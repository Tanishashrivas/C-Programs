#include<stdio.h>
void reverse(int *arr, int n){
    int temp;
    for(int i=0; i<(n/2); i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

int main(){
	int n;
	int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
//	printf("enter n\n");
//	scanf("%d", &n);
	
	reverse(arr, 15);
	for(int i=0;i<15;i++){
		printf("the value of %d element is %d\n", i, arr[i]);
	}
	return 0;
}
