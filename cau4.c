#include <stdio.h>
#include<math.h>
int main(){
  int A;
  int B;
  printf("nhap A:");
  scanf("%d",&A);
  printf("nhap B:");
  scanf("%d",&B);
  int  ktra[B + 1];
  for (int i = 2; i <= B; i++) {
    ktra[i] = 1;
  }
for (int i = 2; i*i <= B; i++) {
	if(ktra[i]==1){
		int t=B/i;
		for(int j=2;j<=t;j++){
			ktra[j*i]=0;
		}
	}
}
  for (int i = A; i <= B; i++) {
    if (ktra[i] == 1) {
      printf("%d ", i);
    }
  }
  return 0;
}