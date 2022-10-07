#include<stdio.h>

int main(){
	FILE *ptr;
//	ptr=fopen("musk.txt", "r");
//	char c= fgetc(ptr);
//	printf(ptr, "value of char is %c", fgetc(ptr));
	
	ptr = fopen("putcdemo.txt", "w");
    putc('c', ptr);
    putc('c', ptr);
    putc('c', ptr);
    fclose(ptr);
    return 0;
}

