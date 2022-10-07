#include<stdio.h>

int main(){
	int a,b,c;
    int max,min;
	printf("enter a, b and c :\n");
	scanf("%d\n""%d\n""%d",&a, &b, &c);
	
	if(a>b && a>c){
		printf("a is maximum\n");
		max=a;
	}
	else if(b>c &&  b>a){
		printf("b is maximum\n");
		max=b;
	}
	else{
		printf("c is maximum\n");
		max=c;
	}
	
	if(a<b && a<c){
		printf("a is minimum\n");
		min=a;
	}
	else if(b<a && b<c){
			printf("b is minimum\n");
			min=b;
	}
	else{
		printf("c is minimum\n");
		min=c;
    }
	
	if(max%2==0){
		printf("Maximum number is %d and it's even\n", max);
	}
	else{
		printf("Maximum number is %d and it's odd\n", max);
	}
	if(min%2==0){
	printf("Minimum number is %d and it's even\n", min);
}
else{
	printf("Minimum number is %d and it's odd\n", min);
}
	return 0;
}

