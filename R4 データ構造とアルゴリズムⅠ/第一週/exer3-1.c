#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a==b){
		if(b==c){
			printf("三つの値は等しい");
		}else{
			printf("二つの値は等しい");
		}
	}else if(a==c){
		printf("二つの値は等しいです")
	}else if(b==c){
		printf("二つの値は等しいです")
	}else{
		printf("三つの値は異なります");
	}
}