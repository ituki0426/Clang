#include <stdio.h>
int main(){
	int a,b,c;
	puts("put a");
	scanf("%d",&a);
	puts("put b");
	scanf("%d",&b);
	puts("put c");
	scanf("%d",&c);
	printf("average is %.2f",(float)(a+b+c)/3);
}