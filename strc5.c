#include<stdio.h>
#include<string.h>

//int sum(int a, int b);

typedef struct vector{
	int x;
	int y;
}sv;

sv sumvector(sv v1, sv v2){
	sv result;
	result.x = v1.x + v2.x;
	result.y = v1.y + v2.y;
    return result;
}

int main(){
	struct vector v1, v2, sum;
	printf("enter the value of following :\n x measure of v1 :\n", v1.x);
	scanf("%d", &v1.x);
	printf("y measure of v1 :\n", v1.y);	
    scanf("%d", &v1.y);
    printf("x measure of v2 :\n", v2.y);
    scanf("%d", &v2.x);
    printf("y measure of v2 :\n", v2.y);
    scanf("%d", &v2.y);
    
    printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);
    printf("X dim is %d and Y dim is %d\n", v2.x, v2.y);
    
    sum = sumvector(v1, v2);
    printf("X dim of result is %d and Y dim is %d\n", sum.x, sum.y);
    return 0;
}

//int sum(int a, int b){
//	int c;
//    c = a + b;
//    return c;
//}

