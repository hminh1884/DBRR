#include<stdio.h>
#include<math.h>
int main(){
	int N;
	printf("Nhap N:");
	scanf("%d",&N);
	int a=pow(10,N);
	int b=pow(10,N-1);
	int ktra[a];
	for(int i=2;i<a;i++){
		ktra[i]=1;
	}
	for(int i=2;i<a;i++){
		if(ktra[i]){
			int t=a/i;
			for(int j=2;j<=t;j++){
				ktra[j*i]=0;
			}
		}
	}
	for(int i=b;i<a;i++){
		if(ktra[i]){
			printf("%d ", i);
		}
	}
}