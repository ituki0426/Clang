#include <stdio.h>
#define M 2
#define N 2
void num_arr(int matA[M][N],int matB[M][N],int matC[M][N]) {
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			matC[i][j]=matA[i][j]+matB[i][j];
		}
	}
}

int main(void) {
  int matA[M][N];
  int matB[M][N];
  int matC[M][N];
  int i,j;
  puts("put matA");
  for(i=0;i<N;i++){
	  for(j=0;j<M;j++){
		  printf("a%d%d=",i+1,j+1);
		  scanf("%d",&matA[i][j]);
	  }
  }
  puts("put matB");
  for(i=0;i<N;i++){
	  for(j=0;j<M;j++){
		  printf("a%d%d=",i+1,j+1);
		  scanf("%d",&matB[i][j]);
	  }
  }
  num_arr(matA,matB,matC);
  puts("matC");
  for(i=0;i<N;i++){
	  for(j=0;j<M;j++){
		  printf("%3d",matC[i][j]);
	  }
	  printf("\n");
  }
  return 0;
}