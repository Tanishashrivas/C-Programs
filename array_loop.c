#include<stdio.h>
int sum(int s);
//float avg(float f);

int main(){
	int a_student =3;
	int b_subject=3;
	int sum,s, i;
	float avg;
	int marks[5][2];
	
	for(int i=0;i<a_student;i++){
		for(int j=0;j<b_subject;j++){
		printf("enter the marks of student %d in subject %d\n", i+1,j+1);
		scanf("%d", &marks[i][j]);
	}
}
for(int i=0;i<a_student;i++){
		for(int j=0;j<b_subject;j++){
		printf("entered marks of student %d in subject %d is %d\n", i+1,j+1,marks[i][j]);
	}
}
printf("sum of 3 subjects of student %d is %d\n", i+1, sum(s));
//printf("avg of 3 subjects of student %d is %f\n", i+1, avg(f));

return 0;
}
int sum(int s){
	if(s!=0){
		return s + sum(s-1);
	}
	else{
		return s;
	}
}
//
//float avg(float f){
//	float F= (float)sum(s)/3;
//	return F;
//}

