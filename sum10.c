#include<stdio.h>

int main()
{
int i = 0, n = 10, sum;
//while(i<=10){
//	sum +=i;
//	i++;
//}
for(i=1;i<=n;i++){
	sum +=i;
}
printf("the value of first 10 natural numbers is %d", sum);

	return 0;
}
