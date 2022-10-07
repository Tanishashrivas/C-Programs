#include<stdio.h>

int main(){
	int i;
	printf("enter i\n");
	scanf("%d", &i);
	
	switch(i)
	{
	case 1:
		for(i=0;i<=8;i++){
			printf("toddler");
		}
	case 2:
		for(i=9;i<=12;i++){
			printf("pre teen");
		}
	case 3:
		for(i=13;i<=19;i++){
			printf("teenager");
		}
	case 4:
		for(i=20;i<=32;i++){
			printf("youth");
		}
	case 5:
		for(i=33;i<=60;i++){
			printf("adult");
		}
	}
	return 0;
}
