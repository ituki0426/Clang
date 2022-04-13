#include <stdio.h>
int main(){
	float a,b;
	scanf("%f",&a);
	scanf("%f",&b);
	if(a>=b){
		printf("%f\n",a);
		printf("%f\n",b);
	}else{
		printf("%f\n",b);
		printf("%f\n",a);
	}
}