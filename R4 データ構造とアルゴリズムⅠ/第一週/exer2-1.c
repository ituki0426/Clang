#include <stdio.h>
int main(){
	int hoge[9][9];
	int s,t;
	for(s=0;s<9;s++){
		for(t=0;t<9;t++){
			hoge[s][t]=(s+1)*(t+1);
		}
	}
	for(s=0;s<9;s++){
		for(t=0;t<9;t++){
			printf("%3d",hoge[s][t]);
		}
		printf("\n");
	}
}