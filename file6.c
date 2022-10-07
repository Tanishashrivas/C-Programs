#include<stdio.h>

int main(){
	FILE *ptr;
	int n;
	printf("enter n\n");
	scanf("%d", &n);
	ptr = fopen("table.txt", "w");
	for(int i=0;i<10;i++){
		fprintf(ptr, "%d x %d = %d\n", n,i+1, n*(i+1));
	}
	fclose(ptr);
	
	printf("table is generated at table.txt for %d\n", n);
	return 0;
}
