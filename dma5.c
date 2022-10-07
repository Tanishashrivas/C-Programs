#include<stdio.h>
#include<stdlib.h>

int main(){
	int *ptr;
	ptr= (int*)calloc(10,sizeof(int));
//	    int n;
//		printf("enter the value for n\n");
//		scanf("%d", &n);
		for(int i=0;i<10;i++){
    	ptr[i]= 10*(i+1);
    	printf("table : 10 x %d is %d\n", i+1, ptr[i]);
    }
    
		
//	}
//    for(int i=0;i<10;i++){
//		printf(" the value for %d element is %d\n",i+1,ptr[i+1]);
//	}
	return 0;
}
