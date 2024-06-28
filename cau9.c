#include <stdio.h>
int main(){
  int N;
  printf("nhap N:");
  scanf("%d",&N);
  int  ktra[N + 1];
  for (int i = 2; i <= N; i++) {
    ktra[i] = 1;
  }
for (int i = 2; i*i <= N; i++) {
	if(ktra[i]==1){
		int t=N/i;
		for(int j=2;j<=t;j++){
			ktra[j*i]=0;
		}
	}
}
int count=0;
  for (int i = 2; i <= N; i++) {
    if (ktra[i] == 1) {
      ++count;
    }
  }
  printf("so cac snt la %d",count);
  return 0;
}