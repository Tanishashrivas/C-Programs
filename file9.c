#include<stdio.h>

int main(){
	FILE *ptr;
	int n;
	ptr=fopen("f.txt", "r");
	fscanf(ptr, "%d", n);
	printf("%d", n);
	ptr=fopen("f.txt", "w");
	fprintf(ptr, "value of n is %d now", 2*n);
	fclose(ptr);
	return 0;
}
