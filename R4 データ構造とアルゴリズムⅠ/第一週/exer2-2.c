#include <stdio.h>
int main(){
	int i;
	int n;
	int result;
	result=0;
	puts("put your number");
	scanf("%d",&n);
		for(i=2;i<n;i++){
			if(n % i ==0){
				result=result+1;
			}
		}
		printf("result is %d",result);
	
}