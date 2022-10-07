#include<stdio.h>
#include<math.h>

int main(){
	float P,R,T;
	float S,C;
	printf("enter p,t,r:\n");
	scanf("%f\n",&P);
	scanf("%f\n",&R);
	scanf("%f",&T);
	S=(float) (P*R*T)/100;
	C= (P*pow((1+R/100),T));
	printf("simple interest is %f\n", S);
	printf("compound interest is %f\n", C);
	return 0;
}
