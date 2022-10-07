#include<stdio.h>

int main(){
	char grade[10];
    int i;
	
	for(i=1;i<10;i++){
		printf("enter the grade for student %d:\n", i);
		scanf("%c", &grade[i]);
	}
	
		for(i=0;i<10;i++){
		printf("entered grade for student %d is %c\n", i, grade[i]);
	}
	return 0;
}
	
	
