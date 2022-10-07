#include<stdio.h>

int main(){
	FILE *ptr;
	ptr = fopen("musk.txt", "r");
	char d= fgetc(ptr);
	while(1){
		if(d!=EOF){
			break;
		}
	}

//	fprintf(ptr, "value of char is %c", d);
	return 0;
}
